
int FUN_005c1ba0(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  char *pcStack_1bc;
  int *piStack_1b8;
  uint uStack_1b4;
  undefined4 *puStack_1b0;
  undefined4 uStack_1ac;
  undefined4 auStack_19c [4];
  uint uStack_18c;
  undefined4 local_188 [20];
  undefined1 auStack_138 [304];
  undefined4 uStack_8;
  
  uStack_1ac = 0;
  puStack_1b0 = &DAT_00701ef8;
  uStack_1b4 = 0;
  puVar4 = &DAT_00701ed8;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_188[0] = 0;
  DAT_00701ec4 = 0;
  DAT_00701ed4 = 0;
  DAT_00701ed0 = 0;
  DAT_00701ecc = 0;
  DAT_00701ec8 = 0;
  piStack_1b8 = (int *)0x5c1be7;
  iVar3 = Ordinal_1();
  if (iVar3 < 0) {
    pcStack_1bc = s_msavi__Create_IDirectSound_using_0067e474;
    DAT_00701ef8 = (int *)0x0;
    uStack_1c0 = (int *)0x5c1bfe;
    piStack_1b8 = (int *)iVar3;
    FUN_005d2250();
    return iVar3;
  }
  piStack_1b8 = (int *)0x2;
  pcStack_1bc = (char *)uStack_8;
  uStack_1c0 = DAT_00701ef8;
  uStack_1c4._0_2_ = 0x1c22;
  uStack_1c4._2_2_ = 0x5c;
  iVar3 = (**(code **)(*DAT_00701ef8 + 0x18))();
  if (iVar3 < 0) {
    uStack_1c4._0_2_ = (undefined2)iVar3;
    uStack_1c4._2_2_ = (undefined2)((uint)iVar3 >> 0x10);
    uStack_1c8._0_2_ = 0xe440;
    uStack_1c8._2_2_ = 0x67;
    uStack_1cc._0_2_ = 0x1c33;
    uStack_1cc._2_2_ = 0x5c;
    FUN_005d2250();
    return iVar3;
  }
  uStack_1c8 = &stack0xfffffe60;
  puVar4 = auStack_19c;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0;
  uStack_1cc = auStack_19c;
  auStack_19c[0] = 0x24;
  auStack_19c[1] = 1;
  auStack_19c[2] = 0;
  uStack_18c = 0;
  iVar3 = (**(code **)(*DAT_00701ef8 + 0xc))((short)DAT_00701ef8);
  if (iVar3 < 0) {
    FUN_005d2250(s_msavi__Get_the_primary_buffer___f_0067e418,(short)iVar3);
    return iVar3;
  }
  uStack_1c4._0_2_ = 0;
  uStack_1c4._2_2_ = 0;
  local_188[0] = 0x60;
  uStack_1c0 = (int *)0x0;
  pcStack_1bc = (char *)0x0;
  piStack_1b8 = (int *)0x0;
  uStack_1b4 = uStack_1b4 & 0xffff0000;
  iVar3 = (**(code **)(*DAT_00701ef8 + 0x10))(DAT_00701ef8,(short)local_188);
  if (iVar3 != 0) {
    pcVar5 = s_msavi__GetCaps___failed_0067e400;
LAB_005c1dcb:
    FUN_005d2250(pcVar5,iVar3);
    return -0x7fffbffb;
  }
  if ((uStack_18c & 8) == 0) {
    if ((uStack_18c & 2) == 0) {
      if ((uStack_18c & 1) == 0) {
        iVar3 = 0;
        pcVar5 = s_Sound_Driver_not_present_0067e38c;
        goto LAB_005c1dcb;
      }
      uStack_1cc._2_2_ = 1;
    }
    else {
      uStack_1cc._2_2_ = 2;
    }
    uVar1 = 8;
  }
  else {
    uStack_1cc._2_2_ = 2;
    uVar1 = 0x10;
  }
  uStack_1c8._0_2_ = 0x5622;
  uStack_1c8._2_2_ = 0;
  uVar2 = (uVar1 >> 3) * uStack_1cc._2_2_;
  uStack_1c0 = (int *)CONCAT22(uVar1,uVar2);
  uStack_1cc._0_2_ = 1;
  uStack_1c4 = (uint)uVar2 * 0x5622;
  iVar3 = (**(code **)(*piStack_1b8 + 0x38))(piStack_1b8,&uStack_1cc);
  if (iVar3 < 0) {
    FUN_0061c369(auStack_138,s_msavi__Set_primary_buffer_format_0067e3a8,uStack_1c8._2_2_,
                 (uint)local_188 >> 0x10);
    FUN_005d2250(auStack_138,iVar3);
    return iVar3;
  }
  if (uStack_1c0 != (int *)0x0) {
    (**(code **)(*uStack_1c0 + 8))(uStack_1c0);
  }
  return 0;
}

