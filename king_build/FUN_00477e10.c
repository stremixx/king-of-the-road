
void __fastcall FUN_00477e10(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 == (undefined4 *)param_1[2]) {
    FUN_00479100(puVar7,&stack0x00000004);
  }
  else {
    if (puVar7 != (undefined4 *)0x0) {
      for (iVar2 = 10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
          iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar7 = *(undefined4 *)register0x00000010;
        puVar7 = puVar7 + 1;
      }
    }
    param_1[1] = param_1[1] + 0x28;
  }
  FUN_0047c190(*param_1,param_1[1],0,0,param_1);
  piVar1 = (int *)param_1[1];
  piVar5 = (int *)*param_1;
  if ((int *)*param_1 != piVar1) {
    do {
      piVar3 = piVar5;
      piVar5 = piVar3 + 10;
      if (piVar5 == piVar1) {
        return;
      }
      iVar2 = piVar3[1];
    } while (((iVar2 != piVar5[1]) || (iVar2 == -1)) &&
            (((*piVar3 != *piVar5 ||
              (((iVar2 != piVar5[1] || (*(double *)(piVar3 + 2) != *(double *)(piVar5 + 2))) ||
               (piVar3[4] != piVar5[4])))) || (piVar3[5] != piVar5[5]))));
    if ((piVar3 != piVar1) && (piVar5 = piVar3 + 10, piVar5 != piVar1)) {
      piVar3 = piVar3 + 1;
      do {
        iVar2 = *piVar3;
        piVar4 = piVar3;
        if (((iVar2 != piVar5[1]) || (iVar2 == -1)) &&
           (((piVar3[-1] != *piVar5 ||
             (((iVar2 != piVar5[1] || (*(double *)(piVar3 + 1) != *(double *)(piVar5 + 2))) ||
              (piVar3[3] != piVar5[4])))) || (piVar3[4] != piVar5[5])))) {
          piVar4 = piVar3 + 10;
          piVar6 = piVar5;
          piVar3 = piVar3 + 9;
          for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar3 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar3 = piVar3 + 1;
          }
        }
        piVar5 = piVar5 + 10;
        piVar3 = piVar4;
      } while (piVar5 != piVar1);
    }
  }
  return;
}

