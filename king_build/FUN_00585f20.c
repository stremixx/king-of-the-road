
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00585f20(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  int local_cc [9];
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_9c [136];
  float local_14;
  float local_10;
  float local_c;
  
  if (param_1[0x5d] != 0) {
    piVar1 = local_cc + 2;
    iVar2 = 4;
    do {
      piVar1[-2] = 0;
      piVar1[-1] = 0;
      *piVar1 = 0;
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    piVar1 = &DAT_00701550;
    piVar3 = local_cc;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    FUN_005f1c10();
    if (DAT_00695bcc != 0) {
      FUN_004e9b0e();
      uVar6 = *(undefined8 *)(DAT_006ee15c + 0xb98);
      puVar4 = local_9c;
      uVar5 = CONCAT44(*(undefined4 *)(param_1[0x50] + 0xc),s__s_time__6_3f_0067c840);
      FUN_0061c369();
      FUN_004e9b0e(local_9c,puVar4,uVar5,uVar6);
      FUN_0061c369(local_9c,s__s_M0__6_3f__6_3f__6_3f_0067c078,*(undefined4 *)(param_1[0x50] + 0xc),
                   (double)local_a8,(double)local_a4,(double)local_a0);
      FUN_004e9b0e(local_9c);
    }
    FUN_005ab130();
    if (((short)param_1[0xcb] != *(short *)((int)param_1 + 0x32e)) ||
       ((float)_DAT_0064a920 <
        (local_c - (float)param_1[0x88]) * (local_c - (float)param_1[0x88]) +
        (local_10 - (float)param_1[0x87]) * (local_10 - (float)param_1[0x87]) +
        (local_14 - (float)param_1[0x86]) * (local_14 - (float)param_1[0x86]))) {
      *(short *)(param_1 + 0xcb) = *(short *)((int)param_1 + 0x32e);
      dVar7 = *(double *)(DAT_006ee15c + 0xb98);
      piVar1 = local_cc;
      piVar3 = param_1 + 0xcc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      }
      param_1[0xca] = (int)(float)dVar7;
      param_1[0xd8] = param_1[0x68];
      param_1[0xd9] = param_1[0x69];
      param_1[0xda] = param_1[0x6a];
      param_1[0xdb] = param_1[0x6b];
      param_1[0xdc] = param_1[0x6c];
      param_1[0xdd] = param_1[0x6d];
    }
    if (DAT_00695bcc != 0) {
      puVar4 = local_9c;
      dVar7 = (double)(float)param_1[0xca];
      uVar6 = CONCAT44(*(undefined4 *)(param_1[0x50] + 0xc),s__s_UpdTime__6_3f_0067c82c);
      FUN_0061c369();
      FUN_004e9b0e(local_9c,puVar4,uVar6,dVar7);
      FUN_0061c369(local_9c,s__s_slaveM__6_3f__6_3f__6_3f_0067c80c,
                   *(undefined4 *)(param_1[0x50] + 0xc),(double)(float)param_1[0xd5],
                   (double)(float)param_1[0xd6],(double)(float)param_1[0xd7]);
      FUN_004e9b0e(local_9c);
      FUN_0061c369(local_9c,s__s_M__6_3f__6_3f__6_3f_0067c7f0,*(undefined4 *)(param_1[0x50] + 0xc),
                   (double)(float)param_1[0x86],(double)(float)param_1[0x87],
                   (double)(float)param_1[0x88]);
      FUN_004e9b0e(local_9c);
    }
    (**(code **)(*param_1 + 0x90))(param_1 + 0x68,s__MovingItem__run_after_SRMIEvent_0067c7c8);
    (**(code **)(*param_1 + 0x94))(param_1 + 0x6b,s__MovingItem__run_after_SRMIEvent_0067c7a0);
    if ((param_1[0xdf] != 0) || (param_1[0xe0] != 0)) {
      param_1[0x379] = 1;
      (**(code **)(*param_1 + 0x3c))();
      param_1[0xdf] = 0;
    }
  }
  return;
}

