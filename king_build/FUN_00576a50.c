
int __thiscall FUN_00576a50(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 unaff_ESI;
  
  puVar2 = param_2;
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return -0x7ff8ffeb;
  }
  iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1,&param_2);
  if (iVar3 == 0) {
    *puVar2 = unaff_ESI;
    iVar3 = 0;
  }
  return iVar3;
}

