
void __thiscall FUN_00471900(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 in_EAX;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = CONCAT22((short)((uint)in_EAX >> 0x10),*(undefined2 *)(param_1 + 2));
  FUN_0046e460(*(undefined4 *)(param_2 + 4),&local_4,(int)&local_4 + 2);
  param_2 = *param_1;
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
  if (param_1[1] != 0) {
    param_2 = *(undefined4 *)(param_1[1] + 0xc);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
    return;
  }
  param_2 = 0xffffffff;
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_2,&stack0x00000008);
  return;
}

