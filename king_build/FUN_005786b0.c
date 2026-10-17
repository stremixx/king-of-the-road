
uint FUN_005786b0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar1 = param_1;
  if (DAT_006f3ae8 == (int *)0x0) {
    return 0x80070015;
  }
  do {
    uVar2 = (**(code **)(*DAT_006f3ae8 + 100))(DAT_006f3ae8);
    if ((int)uVar2 < 0) {
      if (uVar2 == 0x80070015) {
        return 0x80070015;
      }
      if (uVar2 == 0x8007001e) {
        uVar2 = (**(code **)(*DAT_006f3ae8 + 0x1c))(DAT_006f3ae8);
      }
      if (uVar2 == 0x8007000c) {
        uVar2 = (**(code **)(*DAT_006f3ae8 + 0x1c))(DAT_006f3ae8);
      }
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    }
    param_1 = (undefined4 *)(**(code **)(*DAT_006f3ae8 + 0x24))(DAT_006f3ae8,0x50,puVar1);
    if (param_1 == (undefined4 *)0x8007001e) {
      param_1 = (undefined4 *)(**(code **)(*DAT_006f3ae8 + 0x1c))(DAT_006f3ae8);
      if ((int)param_1 < 0) {
        return (uint)param_1;
      }
    }
    else if (param_2 != 0) {
      uVar3 = FUN_0061c356(s_joydata_log_0067beb4,&DAT_0066b4f4);
      FUN_0061d86c(uVar3,s_Buttons_0067bea8);
      uVar2 = 0;
      if ((&DAT_006f24b2)[DAT_006f3af4 * 0x11c] != 0) {
        do {
          if ((*(byte *)((int)puVar1 + uVar2 + 0x30) & 0x80) == 0) {
            puVar6 = (undefined4 *)&DAT_00676968;
          }
          else {
            puVar6 = &DAT_00678f84;
          }
          FUN_0061d86c(uVar3,puVar6);
          uVar4 = uVar2 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          if (uVar4 == 7) {
            FUN_0061d86c(uVar3,&DAT_0067a7ec);
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < (int)(uint)(ushort)(&DAT_006f24b2)[DAT_006f3af4 * 0x11c]);
      }
      FUN_0061d86c(uVar3,s_Axes_0067bea0);
      FUN_0061d86c(uVar3,s__d__d__d__d__d__d_0067be88,*puVar1,puVar1[1],puVar1[2],puVar1[3],
                   puVar1[4],puVar1[5]);
      FUN_0061d86c(uVar3,s_Sliders_0067be7c);
      iVar5 = 0;
      if ((&DAT_006f24b6)[DAT_006f3af4 * 0x11c] != 0) {
        puVar6 = puVar1 + 6;
        do {
          FUN_0061d86c(uVar3,&DAT_00676958,*puVar6);
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar5 < (int)(uint)(ushort)(&DAT_006f24b6)[DAT_006f3af4 * 0x11c]);
      }
      if ((&DAT_006f24b4)[DAT_006f3af4 * 0x11c] != 0) {
        FUN_0061d86c(uVar3,s_POVs_0067be70);
        iVar5 = 0;
        if ((&DAT_006f24b4)[DAT_006f3af4 * 0x11c] != 0) {
          puVar6 = puVar1 + 8;
          do {
            if (*(short *)(puVar1 + 8) == -1) {
              FUN_0061d86c(uVar3,s_0xFFFF_0067be64);
            }
            else {
              FUN_0061d86c(uVar3,&DAT_0067be6c,*puVar6);
            }
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + 1;
          } while (iVar5 < (int)(uint)(ushort)(&DAT_006f24b4)[DAT_006f3af4 * 0x11c]);
        }
      }
      FUN_0061c25a(uVar3);
    }
  } while (param_1 == (undefined4 *)0x8007001e);
  return (uint)param_1 & (-1 < (int)param_1) - 1;
}

