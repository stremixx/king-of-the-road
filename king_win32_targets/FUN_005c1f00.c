
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c1f00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int local_24 [4];
  int local_14;
  
  if (DAT_00701f08 == 0) {
    uVar8 = 0;
    pcVar7 = s_msavi__CreateStreamingBuffer__lp_0067e5f4;
    goto LAB_005c20b2;
  }
  if (DAT_00701ef8 == (int *)0x0) {
    FUN_005d2250(s_msavi_CreateStreamingBuffer_0067e530,0);
LAB_005c208c:
    if (DAT_00701eb8 == 0) goto LAB_005c2094;
  }
  else {
    if (DAT_00701eb8 != 0) {
      if (DAT_00701ebc != 0) {
        uVar5 = *(int *)(DAT_00701f08 + 4) * (uint)*(ushort *)(DAT_00701f08 + 0xc) & 0x7fffffff;
        DAT_00701ecc = 0;
        DAT_00701ec8 = 0;
        DAT_00701ed4 = uVar5 - uVar5 % (uint)*(ushort *)(DAT_00701f08 + 0xc);
        DAT_00701ec4 = DAT_00701ed4 * 2;
        piVar4 = local_24;
        for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar4 = 0;
          piVar4 = piVar4 + 1;
        }
        local_24[0] = 0x24;
        local_24[1] = 0x10100;
        local_14 = DAT_00701f08;
        local_24[2] = DAT_00701ec4;
        iVar6 = (**(code **)(*DAT_00701ef8 + 0xc))(DAT_00701ef8,local_24,&DAT_00701f00,0);
        if (iVar6 < 0) {
          FUN_005d2250(s_msavi__Create_a_DirectSound_buff_0067e5c8,iVar6);
          return iVar6;
        }
        iVar3 = (**(code **)*DAT_00701f00)(DAT_00701f00,&DAT_00654280,&DAT_00701f04);
        iVar2 = DAT_00701ed4;
        iVar6 = DAT_00701eb8;
        if (iVar3 < 0) {
          DAT_00701f04 = (int *)0x0;
          FUN_005d2250(s_msavi__Create_a_notification_eve_0067e578,iVar3);
          return iVar3;
        }
        piVar4 = &DAT_00701edc;
        iVar3 = DAT_00701ed4;
        do {
          iVar1 = iVar3 + -1;
          iVar3 = iVar3 + iVar2;
          piVar4[-1] = iVar1;
          *piVar4 = iVar6;
          piVar4 = piVar4 + 2;
        } while (piVar4 < &DAT_00701eec);
        _DAT_00701ee8 = 0xffffffff;
        _DAT_00701eec = DAT_00701ebc;
        iVar6 = (**(code **)(*DAT_00701f04 + 0xc))(DAT_00701f04,3,&DAT_00701ed8);
        if (-1 < iVar6) {
          return 0;
        }
        FUN_005d2250(s_msavi__SetNotificationPositions___0067e54c,iVar6);
        return iVar6;
      }
      goto LAB_005c208c;
    }
LAB_005c2094:
    FUN_005d2250(s_msavi_CreateStreamingBuffer_0067e530,1);
  }
  if (DAT_00701ebc != 0) {
    return -0x7fffbffb;
  }
  uVar8 = 2;
  pcVar7 = s_msavi_CreateStreamingBuffer_0067e530;
LAB_005c20b2:
  FUN_005d2250(pcVar7,uVar8);
  return -0x7fffbffb;
}

