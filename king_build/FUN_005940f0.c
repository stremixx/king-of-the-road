
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005940f0(undefined4 *param_1,int param_2,undefined4 *param_3,float param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647353;
  local_c = ExceptionList;
  puVar1 = param_1 + 3;
  ExceptionList = &local_c;
  *puVar1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *puVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[5] = param_3[2];
  puVar4 = (undefined4 *)FUN_00631d33(0x90);
  local_4 = 0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_005f1020(s_ThrowLamp_00671c60,0x15,1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_005acbd0();
    *puVar4 = &PTR_FUN_0064c434;
    puVar4[0x22] = 1;
    puVar4[0x23] = 0;
  }
  param_1[6] = puVar4;
  puVar4[0x22] = 1;
  local_4 = 0xffffffff;
  *(undefined4 *)(param_1[6] + 0x8c) = 1;
  fVar3 = param_4 * _DAT_0064f968;
  *(undefined4 *)(param_1[6] + 0x38) = 2;
  iVar2 = param_1[6];
  *(undefined4 *)(iVar2 + 0x3c) = *puVar1;
  *(undefined4 *)(iVar2 + 0x40) = param_1[4];
  *(undefined4 *)(iVar2 + 0x44) = param_1[5];
  *(undefined4 *)(param_1[6] + 0x60) = 0x3f800000;
  *(float *)(param_1[6] + 0x6c) = param_4;
  *(float *)(param_1[6] + 0x70) = fVar3;
  *(float *)(param_1[6] + 0x74) = param_4 * _DAT_0064f964;
  *(undefined4 *)(param_1[6] + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1[6] + 0x58) = 0;
  *(undefined4 *)(param_1[6] + 0x5c) = param_6;
  *(undefined4 *)(param_1[6] + 0x80) = 0x46;
  if (*(int **)(param_2 + 0x210) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x210) + 0x14))(0,param_1[6]);
  }
  param_1[2] = param_5;
  param_1[7] = (float)*(double *)(param_2 + 0xb98);
  ExceptionList = local_c;
  return param_1;
}

