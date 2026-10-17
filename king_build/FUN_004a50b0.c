
bool FUN_004a50b0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_2 == 0) {
    FUN_004a5470(0,1);
  }
  if ((param_2[2] & 0x10000U) != 0) {
    FUN_004a5470(4,1);
  }
  uVar1 = *(undefined4 *)(*param_2 + 0xc);
  if (*param_1 == 0) {
    FUN_004a5470(0,1);
  }
  if ((param_1[2] & 0x10000U) != 0) {
    FUN_004a5470(4,1);
  }
  iVar2 = FUN_0061d520(*(undefined4 *)(*param_1 + 0xc),uVar1);
  return iVar2 < 0;
}

