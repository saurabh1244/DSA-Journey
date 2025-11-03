from fastapi import FastAPI,Request,Depends
import asyncio 
import uuid
import jwt

from app import router

app = FastAPI()

app.include_router(router,prefix="/api")


@app.middleware("http")
async def m1(req:Request,call_next):
    print("middleware 1 before request route me jayega ")
    res = await call_next(req)
    print("middleware 1 after request route se aaya ")

    return res


user_list = {}


secret_key="abc123"
algo = "HS256"

def create_token(data:dict):

    return jwt.encode(data,secret_key,algo)

async def verify_token(token:str):
    decoded =  jwt.decode(token,secret_key,algo)
    print(f"decoded == {decoded}")
    return decoded


@app.get("/user")
async def user_detial(user_jwt = Depends(verify_token)):

   print(f"user_jwt === {user_jwt}")

   return {"msg":"you are authorizex user jwt correct verify"}


@app.on_event("startup")
async def connect_db():
    print("DB connected ✅")

@app.post('/')
async def register(username:str,password:str):
    print("we get username and password sucessfully..")

    user_id = str(uuid.uuid4())
    print(f"user_id = {user_id}")

    user_list[user_id] = {"username":username,"password":password}
    print("data added in list user")

    jwt_token  = create_token({"username":username,"password":password})

    print(f"list  = {user_list}")
    
    return {"data": f"user register succefull..","token":jwt_token}
