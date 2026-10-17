
void __fastcall FUN_004afee0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)*param_1;
  if (piVar4 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar4;
      if (((piVar4[4] & 0x10000U) == 0) && (iVar2 = piVar4[2], iVar2 != 0)) {
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
        piVar3 = (int *)piVar4[2];
        if ((piVar3[1] == 0) && (piVar3 != (int *)0x0)) {
          (**(code **)(*piVar3 + 0xc))(1);
        }
      }
      FUN_0044b440(piVar4,0x14);
      piVar4 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 4) = *param_1;
  FUN_0044b440(*param_1,0x14);
  return;
}

