
void FUN_004060c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int **ppiVar7;
  float10 fVar8;
  int *apiStack_88 [5];
  undefined4 uStack_74;
  int *piStack_70;
  int *piStack_6c;
  int local_54;
  undefined8 local_50;
  double local_48;
  undefined1 auStack_40 [24];
  int aiStack_28 [6];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_48 = 0.0;
  local_54 = 0;
  piVar3 = DAT_0068be98;
  if (DAT_0068be98 != DAT_0068be9c) {
    do {
      iVar4 = 0;
      piVar2 = *(int **)(*piVar3 + 0x78);
      if (piVar2 != *(int **)(*piVar3 + 0x7c)) {
        do {
          *(int *)(*piVar2 + 0x18) = iVar4;
          iVar6 = *(int *)(*piVar2 + 0x10);
          piVar1 = *(int **)(iVar6 + 0x20);
          if (piVar1 == *(int **)(iVar6 + 0x24)) {
            uStack_74 = 0x40612c;
            piStack_70 = piVar1;
            piStack_6c = piVar2;
            FUN_0044fe30();
          }
          else {
            if (piVar1 != (int *)0x0) {
              *piVar1 = *piVar2;
            }
            *(int *)(iVar6 + 0x20) = *(int *)(iVar6 + 0x20) + 4;
          }
          iVar6 = *piVar2;
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + 1;
          *(int *)(iVar6 + 0xc) = local_54;
        } while (piVar2 != *(int **)(*piVar3 + 0x7c));
      }
      iVar4 = *piVar3;
      uVar5 = 0;
      local_50 = 0.0;
      iVar6 = *(int *)(iVar4 + 0x78);
      if (*(int *)(iVar4 + 0x7c) - iVar6 >> 2 != 0) {
        do {
          piStack_6c = (int *)0x406169;
          fVar8 = (float10)(**(code **)(**(int **)(iVar6 + uVar5 * 4) + 0x24))();
          iVar6 = *(int *)(iVar4 + 0x78);
          uVar5 = uVar5 + 1;
          local_50 = (double)(fVar8 + (float10)local_50);
        } while (uVar5 < (uint)(*(int *)(iVar4 + 0x7c) - iVar6 >> 2));
      }
      iVar4 = *piVar3;
      iVar6 = 0;
      *(undefined4 *)(iVar4 + 0x18) = (undefined4)local_50;
      *(undefined4 *)(iVar4 + 0x1c) = local_50._4_4_;
      local_48 = local_48 + *(double *)(*piVar3 + 0x18);
      *(double *)(*piVar3 + 0x28) = local_48;
      piVar2 = (int *)(*piVar3 + 0x78);
      if (0 < (int)(*(int *)(*piVar3 + 0x7c) - *piVar2 & 0xfffffffcU)) {
        do {
          aiStack_28[1] = 0xffffffff;
          uStack_10 = 0;
          uStack_c = 0xffffffff;
          aiStack_28[4] = 0;
          aiStack_28[2] = 0;
          aiStack_28[3] = 0;
          piStack_6c = aiStack_28 + 4;
          piStack_70 = (int *)0x3fa99ae9;
          apiStack_88[4] = aiStack_28 + 2;
          uStack_74 = 0x24f227d0;
          apiStack_88[3] = (int *)0x406208;
          aiStack_28[0] = local_54;
          aiStack_28[5] = iVar6;
          iVar4 = (**(code **)(**(int **)(*piVar2 + iVar6 * 4) + 0x14))();
          while (iVar4 == 0) {
            piVar2 = aiStack_28;
            ppiVar7 = apiStack_88;
            for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
              *ppiVar7 = (int *)*piVar2;
              piVar2 = piVar2 + 1;
              ppiVar7 = ppiVar7 + 1;
            }
            piStack_6c = (int *)FUN_00435cd0(auStack_40);
            piStack_70 = (int *)0x406237;
            FUN_00488000();
            piStack_6c = aiStack_28 + 4;
            piStack_70 = (int *)0x3fa99ae9;
            apiStack_88[4] = aiStack_28 + 2;
            uStack_74 = 0x24f227d0;
            apiStack_88[3] = (int *)0x406258;
            iVar4 = (**(code **)(**(int **)(*(int *)(*piVar3 + 0x78) + iVar6 * 4) + 0x14))();
          }
          iVar6 = iVar6 + 1;
          piVar2 = (int *)(*piVar3 + 0x78);
        } while (iVar6 < *(int *)(*piVar3 + 0x7c) - *piVar2 >> 2);
      }
      piVar3 = piVar3 + 1;
      local_54 = local_54 + 1;
    } while (piVar3 != DAT_0068be9c);
  }
  return;
}

