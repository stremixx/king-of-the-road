
undefined4 FUN_005d8a20(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if ((*(int *)(param_1 + 0x10) == 0xe) && ((*(byte *)(param_1 + 0x28) & 2) != 0)) {
    iVar6 = *(int *)(param_2 + 4);
    if (iVar6 != 0) {
      do {
        pbVar2 = *(byte **)(iVar6 + 0x3c);
        if ((pbVar2 != (byte *)0x0) &&
           (pbVar5 = (byte *)(param_1 + 0x84), (byte *)(param_1 + 0x84) != (byte *)0x0)) {
          do {
            bVar1 = *pbVar2;
            bVar7 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_005d8a84:
              iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
              goto LAB_005d8a89;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar7 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_005d8a84;
            pbVar2 = pbVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_005d8a89:
          if (iVar3 == 0) {
            if (iVar6 == 0) {
              return 0xffffffff;
            }
            iVar6 = *(int *)(iVar6 + 0x40);
            if (iVar6 == 0) {
              return 0xffffffff;
            }
            do {
              pbVar2 = *(byte **)(iVar6 + 0xc);
              pbVar5 = (byte *)(param_1 + 0xa4);
              do {
                bVar1 = *pbVar2;
                bVar7 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_005d8ad6:
                  iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
                  goto LAB_005d8adb;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar2[1];
                bVar7 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_005d8ad6;
                pbVar2 = pbVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_005d8adb:
              if (iVar3 == 0) {
                if (iVar6 == 0) {
                  return 0xffffffff;
                }
                uVar4 = FUN_005eec70(iVar6);
                FUN_005d82a0(*(undefined4 *)(param_2 + 8),uVar4);
                *(int *)(param_1 + 0x80) = iVar6;
                return 0xffffffff;
              }
              iVar6 = *(int *)(iVar6 + 8);
              if (iVar6 == 0) {
                return 0xffffffff;
              }
              if (iVar6 == 0) {
                return 0xffffffff;
              }
            } while( true );
          }
        }
        iVar6 = *(int *)(iVar6 + 8);
        if (iVar6 == 0) {
          return 0xffffffff;
        }
        if (iVar6 == 0) {
          return 0xffffffff;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}

