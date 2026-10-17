
void __thiscall FUN_00475970(undefined4 *param_1,float param_2)

{
  int iVar1;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fcd8;
  local_c = ExceptionList;
  if (((*(char *)(param_1 + 0xd8) == '\0') && (param_1[0xd9] == param_1[0x16])) &&
     (param_1[0xda] == param_1[0x17])) {
    ExceptionList = &local_c;
    FUN_0046e460(*(undefined4 *)((int)param_2 + 4),*param_1,param_1[1]);
    FUN_00490d40(iVar1,&DAT_0066ea60,local_10);
    param_2 = (float)param_1[0x16];
    local_4 = 0;
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
    param_2 = (float)param_1[0xe];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 2);
    param_2 = (float)param_1[9];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 2);
    param_2 = (float)param_1[8];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 2);
    param_2 = (float)*(double *)(param_1 + 10);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
    param_2 = (float)param_1[0xc];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 2);
    param_2 = (float)param_1[0xd];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 2);
    param_2 = (float)param_1[0xf];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 2);
    param_2 = (float)*(double *)(param_1 + 0x52);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
    param_2 = (float)*(double *)(param_1 + 0x7c);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
    param_2._0_1_ = *(undefined1 *)(param_1 + 0x7e);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 1);
    param_2._0_1_ = (undefined1)param_1[0xb4];
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 1);
    param_2 = (float)CONCAT31(param_2._1_3_,(char)param_1[0xb3]);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,(int)&param_2 + 1);
    local_4 = 0xffffffff;
    FUN_00490d90(iVar1,local_10);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_00475570(param_2);
  ExceptionList = local_c;
  return;
}

