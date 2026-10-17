
/* WARNING: Removing unreachable block (ram,0x00484ac4) */
/* WARNING: Removing unreachable block (ram,0x00484bb3) */
/* WARNING: Removing unreachable block (ram,0x00484bbb) */

int * FUN_00484910(int *param_1,int param_2,int param_3,int param_4,double *param_5)

{
  byte bVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  int *local_20;
  int local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pdVar2 = param_5;
  local_c = ExceptionList;
  puStack_8 = &LAB_00640477;
  ExceptionList = &local_c;
  local_20 = (int *)0x0;
  local_4 = 1;
  *(undefined4 *)param_5 = 0;
  *(undefined4 *)((int)param_5 + 4) = 0;
  bVar1 = *(byte *)(*(int *)(*(int *)(DAT_0068be60 + param_3 * 4) + 0xc4 + param_2 * 4) + param_4);
  while( true ) {
    if (bVar1 == 0x7f) {
      *(undefined4 *)pdVar2 = 0xffffffff;
      *(undefined4 *)((int)pdVar2 + 4) = 0x7fefffff;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      ExceptionList = local_c;
      return param_1;
    }
    param_5 = (double *)(uint)bVar1;
    if (bVar1 == 0xff) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                   s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x176,s_Internal_error_7892_0066f230,
                   &DAT_0068c120,&DAT_0068c120);
    }
    uVar5 = (uint)(bVar1 >> 7);
    local_10 = (uint)CONCAT11((char)((uint)local_10 >> 0x18),
                              (bVar1 >> 7) << 7 | (byte)((uint)param_5 & 0x7f)) << 0x10;
    local_14 = *(undefined4 *)
                (*(int *)(*(int *)(DAT_0068be60 + param_3 * 4) + 0x14 + uVar5 * 0xc) +
                ((uint)param_5 & 0x7f) * 4);
    local_18 = param_3;
    if (local_20 == (int *)0x0) {
      FUN_0047b880(0,&local_18);
    }
    else {
      FUN_00487db0(local_20,&local_18);
      local_20 = local_20 + 3;
    }
    fVar6 = (float10)FUN_004098e0(param_2,local_20[-2],uVar5);
    *pdVar2 = (double)(fVar6 + (float10)*pdVar2);
    param_3 = *(int *)(*(int *)(local_20[-2] + 0x70 + (uVar5 ^ 1) * 4) + 0x10);
    if (param_3 == param_4) break;
    bVar1 = *(byte *)(*(int *)(*(int *)(DAT_0068be60 + param_3 * 4) + 0xc4 + param_2 * 4) + param_4)
    ;
  }
  local_14 = 0;
  local_10 = CONCAT13((char)((uint)local_10 >> 0x18),0xff0000);
  local_18 = param_3;
  if (local_20 == (int *)0x0) {
    FUN_0047b880(0,&local_18);
  }
  else {
    if (local_20 != (int *)0x0) {
      *local_20 = param_3;
      local_20[1] = 0;
      local_20[2] = local_10;
    }
    local_20 = local_20 + 3;
  }
  iVar4 = (int)local_20 / 0xc;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0044b6e0(iVar4 * 0xc);
  }
  *param_1 = iVar3;
  param_1[1] = iVar3;
  param_1[2] = iVar3 + iVar4 * 0xc;
  local_4._0_1_ = 2;
  iVar4 = FUN_0046f490(0,local_20,iVar3,param_2);
  param_1[1] = iVar4;
  ExceptionList = local_c;
  return param_1;
}

