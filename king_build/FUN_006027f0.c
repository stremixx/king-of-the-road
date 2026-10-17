
void __thiscall FUN_006027f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  FUN_00602c50(0,piVar1,0x78);
  FUN_0047a100(0,piVar1,param_2);
  FUN_0047a100(0,piVar1,param_4);
  FUN_0046e460(*(undefined4 *)(param_1 + 8),param_3,param_3 + param_4);
  *(int *)*piVar1 = *(int *)(param_1 + 8) - *piVar1;
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  *(int *)(*piVar1 + 4) = iVar2;
  return;
}

