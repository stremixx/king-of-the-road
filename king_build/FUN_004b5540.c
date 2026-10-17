
void __fastcall FUN_004b5540(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  byte *pbStack_108;
  undefined4 uStack_104;
  byte *pbStack_100;
  byte *pbStack_fc;
  byte local_e8 [4];
  undefined4 local_e4 [57];
  
  pbStack_108 = local_e8;
  pbStack_fc = *(byte **)(param_1 + 0xc);
  pbStack_100 = (byte *)0x4;
  uStack_104 = 1;
  uStack_10c = 0x4b555e;
  iVar1 = FUN_0061d8bf();
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  }
  else {
    pbStack_fc = local_e8 + iVar1;
    pbStack_100 = local_e8;
    FUN_004abfa0(auStack_110);
    FUN_004ac180();
    if (iVar1 == 4) {
      bVar8 = false;
      iVar2 = 0;
      bVar9 = true;
      iVar1 = 4;
      pbVar4 = local_e8;
      pbVar6 = &DAT_00670510;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar8 = *pbVar4 < *pbVar6;
        bVar9 = *pbVar4 == *pbVar6;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar9);
      if (!bVar9) {
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x40) = 1;
        iVar1 = *(int *)(param_1 + 0x30);
        pbStack_100 = *(byte **)(param_1 + 0x34);
        if ((byte *)iVar1 == pbStack_100) {
          pbStack_fc = (byte *)0x200;
          uStack_104 = 0x4b55ca;
          FUN_0044b440();
          piVar3 = (int *)(*(int *)(param_1 + 0x3c) + -4);
          *(int **)(param_1 + 0x3c) = piVar3;
          iVar1 = *piVar3;
          *(int *)(param_1 + 0x34) = iVar1;
          iVar1 = iVar1 + 0x200;
          *(int *)(param_1 + 0x38) = iVar1;
        }
        *(int *)(param_1 + 0x30) = iVar1 + -1;
        pbStack_100 = *(byte **)(param_1 + 0x34);
        if ((byte *)(iVar1 + -1) == pbStack_100) {
          pbStack_fc = (byte *)0x200;
          uStack_104 = 0x4b5601;
          FUN_0044b440();
          piVar3 = (int *)(*(int *)(param_1 + 0x3c) + -4);
          *(int **)(param_1 + 0x3c) = piVar3;
          iVar1 = *piVar3;
          *(int *)(param_1 + 0x34) = iVar1;
          *(int *)(param_1 + 0x38) = iVar1 + 0x200;
          *(int *)(param_1 + 0x30) = iVar1 + 0x1ff;
        }
        else {
          *(int *)(param_1 + 0x30) = iVar1 + -2;
        }
        pbStack_100 = *(byte **)(param_1 + 0x34);
        if ((byte *)*(int *)(param_1 + 0x30) == pbStack_100) {
          pbStack_fc = (byte *)0x200;
          uStack_104 = 0x4b563b;
          FUN_0044b440();
          piVar3 = (int *)(*(int *)(param_1 + 0x3c) + -4);
          *(int **)(param_1 + 0x3c) = piVar3;
          iVar1 = *piVar3;
          *(int *)(param_1 + 0x34) = iVar1;
          *(int *)(param_1 + 0x38) = iVar1 + 0x200;
          *(int *)(param_1 + 0x30) = iVar1 + 0x1ff;
        }
        else {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        }
        iVar1 = *(int *)(param_1 + 0x30);
        pbStack_100 = *(byte **)(param_1 + 0x34);
        if ((byte *)iVar1 == pbStack_100) {
          pbStack_fc = (byte *)0x200;
          uStack_104 = 0x4b566d;
          FUN_0044b440();
          piVar3 = (int *)(*(int *)(param_1 + 0x3c) + -4);
          *(int **)(param_1 + 0x3c) = piVar3;
          iVar1 = *piVar3;
          *(int *)(param_1 + 0x34) = iVar1;
          iVar1 = iVar1 + 0x200;
          *(int *)(param_1 + 0x38) = iVar1;
        }
        *(int *)(param_1 + 0x30) = iVar1 + -1;
        pbStack_fc = (byte *)DAT_0067050c;
        pbStack_100 = (byte *)0x4b569c;
        FUN_00440eb0();
        puVar5 = local_e4;
        puVar7 = (undefined4 *)(param_1 + 0x44);
        for (iVar1 = 0x39; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        return;
      }
    }
  }
  return;
}

