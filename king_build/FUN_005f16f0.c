
/* WARNING: Removing unreachable block (ram,0x005f173f) */

void __thiscall FUN_005f16f0(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  
  if (((param_2 < *(int *)(param_1 + 0x34)) && (-1 < param_2)) &&
     (piVar1 = *(int **)(*(int *)(param_1 + 0x30) + param_2 * 4), piVar1 != (int *)0x0)) {
    if ((param_3 & 1) == 0) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
        (**(code **)(*piVar1 + 0x30))(param_3,param_4);
      }
    }
    else {
      for (piVar2 = (int *)piVar1[2]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        piVar1 = piVar2;
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        (**(code **)(*piVar1 + 0x30))(param_3,param_4);
      }
    }
  }
  return;
}

