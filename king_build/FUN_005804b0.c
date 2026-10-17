
void __fastcall FUN_005804b0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_9c [9];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_6c [104];
  
  if ((param_1[0x12a] == 0) || (param_1[0xdf] == 0)) {
    if (param_1[0x5d] == 0) {
      *(short *)((int)param_1 + 0x32e) = (short)*(undefined4 *)(DAT_006ee15c + 0xbb0);
    }
    param_1[0x77] = DAT_007015b0;
    param_1[0x78] = DAT_007015b4;
    param_1[0x79] = DAT_007015b8;
    param_1[0x7a] = DAT_007015b0;
    param_1[0x7b] = DAT_007015b4;
    iVar2 = DAT_007015b8;
    param_1[0xdf] = 0;
    param_1[0x7c] = iVar2;
    (**(code **)(*param_1 + 0x4c))();
    param_1[0x12a] = 0;
    param_1[300] = 1;
    FUN_005d29a0();
    if (DAT_00695bcc != 0) {
      puVar1 = auStack_9c + 2;
      iVar2 = 4;
      do {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1 = puVar1 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar1 = &DAT_00701550;
      puVar3 = auStack_9c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_005f1c10();
      FUN_004e9b0e();
      FUN_0061c369(auStack_6c,s__s_M0__6_3f__6_3f__6_3f_0067c078,
                   *(undefined4 *)(param_1[0x50] + 0xc),(double)fStack_78,(double)fStack_74,
                   (double)fStack_70);
      FUN_004e9b0e(auStack_6c);
      FUN_0061c369(auStack_6c,s_A__s_M__6_3f__6_3f__6_3f_0067c05a + 2,
                   *(undefined4 *)(param_1[0x50] + 0xc),(double)(float)param_1[0x86],
                   (double)(float)param_1[0x87],(double)(float)param_1[0x88]);
      FUN_004e9b0e(auStack_6c);
    }
  }
  else {
    param_1[300] = 0;
    if (param_1[0x5d] == 0) {
      (**(code **)(*param_1 + 0xcc))();
      return;
    }
  }
  return;
}

