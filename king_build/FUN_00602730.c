
void __thiscall FUN_00602730(int param_1,float param_2,double param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 4);
  FUN_00602c50(0,piVar1,0x2a);
  FUN_0047a100(0,piVar1,param_2);
  param_2 = (float)param_3;
  FUN_0046e460(*(undefined4 *)(param_1 + 8),&param_2,&param_3);
  *(int *)*piVar1 = *(int *)(param_1 + 8) - *piVar1;
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  *(int *)(*piVar1 + 4) = iVar2;
  return;
}

