
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00565730(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  float local_128;
  undefined1 local_100 [48];
  undefined1 local_d0 [116];
  int iStack_5c;
  
  if (DAT_006ee158 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = DAT_006ee158 + -4;
  }
  piVar11 = (int *)0x0;
  fVar1 = *(float *)(param_1 + 0x24);
  local_128 = 100000.0;
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x2c);
  if (iVar10 != 0) {
    do {
      piVar7 = (int *)FUN_00541090();
      iVar8 = FUN_0057d570(local_100);
      fVar4 = *(float *)(iVar8 + 0x24) - fVar1;
      fVar5 = *(float *)(iVar8 + 0x28) - fVar2;
      fVar6 = *(float *)(iVar8 + 0x2c) - fVar3;
      fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
      if (param_2 == 0) {
        if ((piVar7[0x952] == param_3) || (param_3 == 0)) goto LAB_00565810;
LAB_00565830:
        if ((piVar7[0x1474] != 0) &&
           (((piVar11 == (int *)0x0 || (piVar11[0x1474] == 0)) ||
            ((fVar4 < local_128 && (_DAT_0064b240 < fVar4)))))) goto LAB_00565868;
      }
      else {
        if (piVar7[0x131] == 0) goto LAB_00565830;
LAB_00565810:
        if ((local_128 <= fVar4) || (fVar4 <= _DAT_0064b240)) goto LAB_00565830;
LAB_00565868:
        piVar11 = piVar7;
        local_128 = fVar4;
      }
    } while ((*(int *)(iVar10 + 8) != 0) && (iVar10 = *(int *)(iVar10 + 8) + -4, iVar10 != 0));
    if ((piVar11 != (int *)0x0) &&
       (((param_2 == 0 && (param_3 == 0)) || (local_128 < _DAT_0064c7a0)))) {
      FUN_005eebf0();
      puVar12 = local_d0;
      iVar10 = FUN_0057d570(local_100);
      uVar9 = FUN_004e6d06(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xd98),0,
                           param_1 + 0x24,iVar10 + 0x24,puVar12);
      iVar10 = 0;
      iVar8 = (**(code **)(*piVar11 + 4))();
      if (iVar8 == 1) {
        iVar10 = piVar11[0x155e];
      }
      if ((((uVar9 & 1) == 0) || (iStack_5c == 0)) ||
         ((piVar7 = (int *)FUN_0053eeb0(iStack_5c), piVar7 != piVar11 &&
          (iVar8 = FUN_0053eeb0(iStack_5c), iVar8 != iVar10)))) {
        return (int *)0x0;
      }
    }
  }
  return piVar11;
}

