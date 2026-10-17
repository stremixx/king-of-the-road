
void FUN_0048ae90(undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = -1 < param_2;
  if (!bVar2) {
    param_2 = -param_2;
  }
  iVar1 = FUN_0048aec0(param_1,param_2);
  *(ushort *)(iVar1 + 4) = (ushort)bVar2;
  return;
}

