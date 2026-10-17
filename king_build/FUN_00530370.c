
undefined4
FUN_00530370(byte *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,int param_6
            ,int *param_7)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((param_3 != 0) && (DAT_006d103c != 0)) {
    iVar3 = DAT_006d103c + -4;
    for (iVar1 = iVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8) + -4) {
      if (((*(int *)(iVar1 + 0x14) == param_3) && (*(int *)(iVar1 + 0x20) == param_6)) &&
         (*(int *)(iVar1 + 0x1c) == param_5)) {
        pbVar4 = (byte *)(iVar1 + 0x24);
        pbVar6 = param_1;
        do {
          bVar2 = *pbVar4;
          bVar7 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_005303de:
            iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
            goto LAB_005303e3;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar7 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_005303de;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005303e3:
        if (iVar5 == 0) {
          *param_7 = iVar1;
          return 1;
        }
      }
      if (*(int *)(iVar1 + 8) == 0) break;
    }
    if (iVar3 != 0) {
      do {
        if (param_3 == 1) {
          if (((*(int *)(iVar3 + 0x18) == 0) && (*(int *)(iVar3 + 0x14) == 1)) &&
             (*(int *)(iVar3 + 0x20) == 0)) {
            iVar1 = *(int *)(iVar3 + 0x1c);
joined_r0x0053044c:
            if (iVar1 == 0) {
              *param_7 = iVar3;
              return 2;
            }
          }
        }
        else if (((*(int *)(iVar3 + 0x18) == 0) && (*(int *)(iVar3 + 0x14) == 2)) &&
                (*(int *)(iVar3 + 0x20) == 0)) {
          iVar1 = *(int *)(iVar3 + 0x1c);
          goto joined_r0x0053044c;
        }
      } while ((*(int *)(iVar3 + 8) != 0) && (iVar3 = *(int *)(iVar3 + 8) + -4, iVar3 != 0));
    }
  }
  return 0;
}

