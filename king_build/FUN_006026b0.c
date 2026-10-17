
void __thiscall FUN_006026b0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)(param_1 + 4);
  FUN_00602c50(0,piVar1,7);
  FUN_0047a100(0,piVar1,param_2);
  FUN_00602c50(0,piVar1,param_4);
  iVar2 = 6;
  puVar3 = param_3;
  do {
    param_2 = *puVar3;
    FUN_0046e460(*(undefined4 *)(param_1 + 8),&param_2,&param_3);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)*piVar1 = *(int *)(param_1 + 8) - *piVar1;
  iVar2 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar2;
  *(int *)(*piVar1 + 4) = iVar2;
  return;
}

