
float10 FUN_006047b0(void)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_4;
  
  fVar1 = DAT_00683354;
  if (DAT_007230f4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_007230f4 + 0x18))(DAT_007230f4,&local_4);
    if (iVar2 == 0) {
      fVar3 = (float10)FUN_00603db0(local_4);
      return fVar3;
    }
  }
  return (float10)fVar1;
}

