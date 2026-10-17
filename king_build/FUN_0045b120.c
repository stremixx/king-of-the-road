
int FUN_0045b120(int param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = *unaff_FS_OFFSET;
  puStack_8 = &LAB_0063efc8;
  *unaff_FS_OFFSET = &local_c;
  local_4 = 0;
  while ((param_1 != param_2 && (cVar1 = FUN_004b66a0(param_1,&param_3), cVar1 == '\0'))) {
    param_1 = param_1 + 0x68;
  }
  local_4 = 0xffffffff;
  if (((((param_5 & 0x10000) == 0) && (param_3 != (int *)0x0)) &&
      (param_3[1] = param_3[1] + -1, param_3[1] == 0)) && (param_3 != (int *)0x0)) {
    (**(code **)(*param_3 + 0xc))(1);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}

