
undefined1 FUN_00429db0(int *param_1,double *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int local_c;
  
  uVar1 = 0;
  do {
    iVar3 = *param_1;
    while( true ) {
      if (iVar3 == param_1[1]) {
        return uVar1;
      }
      fVar6 = (float10)FUN_00401000();
      if ((float10)*(double *)(iVar3 + 0x48) < fVar6) break;
      iVar3 = iVar3 + 0x90;
    }
    fVar6 = (float10)FUN_00471470(iVar3);
    *param_2 = (double)(fVar6 + (float10)*param_2);
    if ((iVar3 + 0x90 != param_1[1]) &&
       (local_c = (param_1[1] - (iVar3 + 0x90)) / 0x90, 0 < local_c)) {
      puVar2 = (undefined4 *)(iVar3 + 0x94);
      do {
        puVar2[-0x25] = puVar2[-1];
        puVar2[-0x24] = *puVar2;
        puVar2[-0x23] = puVar2[1];
        puVar2[-0x22] = puVar2[2];
        puVar2[-0x21] = puVar2[3];
        puVar4 = puVar2 + 5;
        puVar5 = puVar2 + -0x1f;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar2[-0x17] = puVar2[0xd];
        puVar2[-0x16] = puVar2[0xe];
        puVar2[-0x15] = puVar2[0xf];
        puVar2[-0x14] = puVar2[0x10];
        puVar2[-0x13] = puVar2[0x11];
        puVar2[-0x12] = puVar2[0x12];
        puVar2[-0x11] = puVar2[0x13];
        puVar2[-0x10] = puVar2[0x14];
        puVar2[-0xf] = puVar2[0x15];
        puVar2[-0xe] = puVar2[0x16];
        puVar2[-0xd] = puVar2[0x17];
        puVar2[-0xc] = puVar2[0x18];
        puVar2[-0xb] = puVar2[0x19];
        puVar2[-9] = puVar2[0x1b];
        puVar2[-8] = puVar2[0x1c];
        FUN_004618d0(puVar2 + 0x1d);
        puVar2[-4] = puVar2[0x20];
        puVar2[-3] = puVar2[0x21];
        puVar2 = puVar2 + 0x24;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
    param_1[1] = param_1[1] + -0x90;
    FUN_0041cf40();
    uVar1 = 1;
  } while( true );
}

