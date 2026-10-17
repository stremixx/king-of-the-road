
undefined4 __fastcall FUN_006030f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_4;
  
  piVar2 = &local_4;
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 != (int *)0x0) {
    local_4 = param_1;
    iVar1 = (**(code **)*piVar3)(piVar3,&DAT_006544d0,&local_4);
    if (-1 < iVar1) {
      piVar2 = (int *)FUN_00603150(piVar2,local_4);
      iVar1 = (**(code **)(*piVar3 + 0x1c))(piVar3);
      (**(code **)(*piVar2 + 8))(piVar2);
      if (-1 < iVar1) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}

