
int FUN_005817a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(param_1 + 0x3c4);
  local_8 = *(undefined4 *)(param_1 + 0x3c8);
  local_4 = *(undefined4 *)(param_1 + 0x3cc);
  local_18 = *(undefined4 *)(param_1 + 0x3d0);
  local_14 = *(undefined4 *)(param_1 + 0x3d4);
  local_10 = *(undefined4 *)(param_1 + 0x3d8);
  if ((*(int *)(param_1 + 0x188) == 2) &&
     (iVar1 = FUN_00581580(param_1,param_2,&local_c,&local_18,param_3,0,param_4), iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}

