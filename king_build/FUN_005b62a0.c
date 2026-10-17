
void __fastcall FUN_005b62a0(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iStack_28;
  int iStack_24;
  int aiStack_18 [4];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0x30) == 0) && (DAT_0071f86c != 0)) {
    if (DAT_0071f858 != (int *)0x0) {
      iVar3 = (**(code **)(*DAT_0071f858 + 0x60))(DAT_0071f858);
      if (iVar3 == -0x7789fe3e) {
        iVar3 = (**(code **)(*DAT_0071f858 + 0x6c))(DAT_0071f858);
        if (iVar3 != 0) {
          uVar4 = FUN_005d42c0(iVar3,0,0x12);
          FUN_005d2250(uVar4);
        }
      }
    }
    if ((DAT_0071f85c != (int *)0x0) && ((*(uint *)(param_1 + 6) & 0x2000) == 0)) {
      iVar3 = (**(code **)(*DAT_0071f85c + 0x60))(DAT_0071f85c);
      if (iVar3 == -0x7789fe3e) {
        iVar3 = (**(code **)(*DAT_0071f85c + 0x6c))(DAT_0071f85c);
        if (iVar3 != 0) {
          uVar4 = FUN_005d42c0(iVar3,0,0x11);
          FUN_005d2250(uVar4);
        }
      }
    }
    if (DAT_0071f860 != (int *)0x0) {
      iVar3 = (**(code **)(*DAT_0071f860 + 0x60))(DAT_0071f860);
      if (iVar3 == -0x7789fe3e) {
        iVar3 = (**(code **)(*DAT_0071f860 + 0x6c))(DAT_0071f860);
        if (iVar3 != 0) {
          uVar4 = FUN_005d42c0(iVar3,0,0x10);
          FUN_005d2250(uVar4);
        }
      }
    }
  }
  if (((*(uint *)(param_1 + 6) & 0x1000) == 0) &&
     ((iVar3 = *(int *)(param_1 + 0x30), iVar3 == 0 || ((*(uint *)(iVar3 + 0xc) & 0x1000) == 0)))) {
    if ((*(uint *)(param_1 + 6) & 0x200) != 0) {
      uVar4 = FUN_005d3690(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) = uVar4;
      uVar2 = FUN_005d31b0();
      param_1[3] = uVar2;
      return;
    }
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x18 + *(int *)(iVar3 + 0x10) * 4);
      if (iVar1 == 0) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[3] = *(ushort *)(iVar3 + 6);
        return;
      }
      *(uint *)(param_1 + 0xc) =
           (uint)param_1[2] * *(int *)(param_1 + 0x32) +
           iVar1 + (uint)*(ushort *)(iVar3 + 6) * *(int *)(param_1 + 0x34);
      param_1[3] = *(ushort *)(iVar3 + 6);
      return;
    }
  }
  else {
    piVar5 = aiStack_18;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
    FUN_005b5dc0(&iStack_28);
    aiStack_18[2] = (int)*param_1;
    if (iStack_28 < 0) {
      aiStack_18[2] = aiStack_18[2] + iStack_28;
      iStack_28 = 0;
    }
    aiStack_18[3] = (int)param_1[1];
    if (iStack_24 < 0) {
      aiStack_18[3] = aiStack_18[3] + iStack_24;
      iStack_24 = 0;
    }
    uStack_4 = 0x3f800000;
    uStack_8 = 0;
    if (DAT_0071f868 != (int *)0x0) {
      aiStack_18[0] = iStack_28;
      aiStack_18[1] = iStack_24;
      iVar3 = (**(code **)(*DAT_0071f868 + 0x34))(DAT_0071f868,aiStack_18);
      if (iVar3 != 0) {
        uVar4 = FUN_005d42c0(iVar3,0,0);
        FUN_005d2250(uVar4);
      }
    }
    iVar3 = *(int *)(param_1 + 8);
    (param_1 + iVar3 * 2 + 0xc)[0] = 0;
    (param_1 + iVar3 * 2 + 0xc)[1] = 0;
  }
  return;
}

