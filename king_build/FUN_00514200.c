
void __thiscall FUN_00514200(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  switch(param_2) {
  case 1:
    if (*(int *)(param_1 + 0x1c4) < 0) {
      if (DAT_006957a8 == param_1 + -0x40) {
        (**(code **)(*DAT_006cdbe0 + 0x24))();
      }
      (**(code **)(*(int *)(param_1 + -0x40) + 0x20))();
      DAT_006cdbe0[0x5d] = 0;
      FUN_00512e30();
      FUN_00513f70();
      FUN_00603330(s_EFFECTS_00671998,s_control_00675768,*(undefined4 *)(DAT_006cdbcc + 0x500),
                   DAT_006957c8);
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0x1c4) < 0) {
      (**(code **)(*(int *)(param_1 + -0x40) + 0x20))();
      DAT_006cdbe0[0x5d] = 0;
      (**(code **)(*DAT_006cdbe0 + 0x24))();
      *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x1c8);
      puVar6 = (undefined4 *)(param_1 + 0x348);
      puVar7 = (undefined4 *)(param_1 + 0x1d0);
      for (iVar5 = 0x5e; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      return;
    }
    break;
  default:
    if (((*(int *)(param_1 + 0x1c4) < 0) && (999 < param_2)) && (param_2 < 0x417)) {
      piVar4 = &DAT_006d0b18;
      *(int *)(param_1 + 0x1c4) = param_2 + -1000;
      pdVar3 = (double *)(param_1 + 0x130);
      do {
        dVar1 = (double)(float)piVar4[-2];
        *pdVar3 = (double)(float)piVar4[-2];
        pdVar3[8] = dVar1;
        if (*piVar4 != 0) {
          pdVar3[8] = -dVar1;
          *pdVar3 = -*pdVar3;
        }
        piVar4 = piVar4 + 3;
        pdVar3 = pdVar3 + 1;
      } while ((int)piVar4 < 0x6d0b78);
    }
    break;
  case 0x21:
    iVar5 = *(int *)(param_1 + 0x120);
    iVar2 = FUN_005d2730();
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar5 + 0x120);
    }
    FUN_005bd250(iVar2);
    return;
  case 0x8d:
    *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
    FUN_00513080();
    return;
  case 0x8e:
    if (*(int *)(param_1 + 0x4c0) != 0) {
      FUN_00512e30();
      iVar5 = *(int *)(param_1 + 0x4c0) + -1;
LAB_00514274:
      *(int *)(param_1 + 0x4c0) = iVar5;
      FUN_00530730(iVar5);
      FUN_00512ce0();
      FUN_00513f70();
      return;
    }
    break;
  case 0x8f:
    if (*(int *)(param_1 + 0x4c0) < DAT_006d0fdc + -1) {
      FUN_00512e30();
      iVar5 = *(int *)(param_1 + 0x4c0) + 1;
      goto LAB_00514274;
    }
  }
  return;
}

