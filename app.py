from fastapi import APIRouter

router = APIRouter()


@router.get("/pop")
async def hello():
    return {"msg":"pop work"}


