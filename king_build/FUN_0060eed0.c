
void __fastcall FUN_0060eed0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)param_1[1];
  param_1[2] = 0;
  if (piVar6 == (int *)0x0) {
    return;
  }
  piVar5 = (int *)*param_1;
  if (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[1];
    piVar2 = (int *)piVar6[1];
    do {
      if ((float)piVar5[0x12] < (float)piVar6[0x12]) {
        do {
          if (piVar5 == piVar1) {
            iVar4 = *param_1;
            piVar6[1] = *(int *)(iVar4 + 4);
            *piVar2 = iVar4;
            **(undefined4 **)(iVar4 + 4) = piVar6;
            *(int **)(iVar4 + 4) = piVar2;
            param_1[1] = 0;
            return;
          }
          piVar5 = (int *)*piVar5;
        } while ((float)piVar5[0x12] < (float)piVar6[0x12]);
      }
      piVar7 = piVar6;
      if ((float)piVar6[0x12] <= (float)piVar5[0x12]) {
        do {
          if (piVar7 == piVar2) {
            if (piVar5 == (int *)*param_1) {
              *param_1 = (int)piVar6;
            }
            piVar6[1] = piVar5[1];
            *piVar2 = (int)piVar5;
            *(int **)piVar5[1] = piVar6;
            piVar5[1] = (int)piVar2;
            param_1[1] = 0;
            return;
          }
          piVar7 = (int *)*piVar7;
        } while ((float)piVar7[0x12] <= (float)piVar5[0x12]);
      }
      if (piVar5 == (int *)*param_1) {
        *param_1 = (int)piVar6;
      }
      puVar3 = (undefined4 *)piVar7[1];
      piVar6[1] = piVar5[1];
      *puVar3 = piVar5;
      *(int **)piVar5[1] = piVar6;
      piVar5[1] = (int)puVar3;
      piVar6 = piVar7;
    } while( true );
  }
  *param_1 = (int)piVar6;
  param_1[1] = 0;
  return;
}

