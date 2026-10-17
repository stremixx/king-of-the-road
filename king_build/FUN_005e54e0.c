
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005e54e0(ushort *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iStack0000000c;
  int local_8;
  
  if (DAT_0071f864 == 0) {
    return;
  }
  if (((*param_1 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
    iVar2 = FUN_00631d33((uint)param_1[2] << 5);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0x28) = iVar2;
  }
  else {
    iVar2 = FUN_00631d33((uint)param_1[2] << 5);
    if (iVar2 == 0) {
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
    else {
      *(int *)(param_1 + 0x26) = iVar2;
    }
  }
  if (param_1[3] < 2) {
    uVar4 = *(uint *)(param_2 + 0x18);
    if ((int)uVar4 < 1) goto LAB_005e5623;
    *(byte *)(param_1 + 0x20) = (byte)uVar4;
    iVar2 = (uVar4 & 0xff) * (uint)param_1[2];
  }
  else {
    bVar1 = (byte)param_1[3] - 1;
    *(byte *)(param_1 + 0x20) = bVar1;
    iVar2 = (uint)bVar1 * (uint)param_1[2];
  }
  uVar3 = FUN_00631d33(iVar2 << 3);
  *(undefined4 *)(param_1 + 0x22) = uVar3;
LAB_005e5623:
  iVar2 = 0;
  if (param_1[2] != 0) {
    iStack0000000c = 0;
    local_8 = 0;
    do {
      if (((*param_1 & 1) == 0) || (((byte)DAT_00701dec & 0x40) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x28) + iStack0000000c) =
             *(undefined4 *)(param_2 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 4 + iStack0000000c) =
             *(undefined4 *)
              (param_2 + 4 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 8 + iStack0000000c) =
             *(undefined4 *)
              (param_2 + 8 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        if ((*param_1 & 2) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18 + iStack0000000c) =
               *(undefined4 *)
                (param_2 + 0xc + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
          iVar7 = *(int *)(param_1 + 0x28);
          uVar3 = *(undefined4 *)
                   (param_2 + 0x10 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18 + iStack0000000c) =
               *(undefined4 *)(*(int *)(param_1 + 6) + iVar2 * 4);
          iVar7 = *(int *)(param_1 + 0x28);
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4);
        }
        *(undefined4 *)(iVar7 + 0x1c + iStack0000000c) = uVar3;
        if ((byte)param_1[0x20] != 0) {
          iVar7 = 0;
          uVar4 = (uint)(byte)param_1[0x20];
          if (uVar4 != 0) {
            do {
              if ((*param_1 & 2) == 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x22) + (uVar4 * iVar2 + iVar7) * 8) =
                     *(undefined4 *)
                      (*(int *)(param_2 + 0x14 +
                               (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c) +
                      iVar7 * 8);
                *(undefined4 *)
                 (*(int *)(param_1 + 0x22) + 4 + ((uint)(byte)param_1[0x20] * iVar2 + iVar7) * 8) =
                     *(undefined4 *)
                      (*(int *)(param_2 + 0x14 +
                               (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c) + 4 +
                      iVar7 * 8);
              }
              else {
                *(undefined4 *)(*(int *)(param_1 + 0x22) + (uVar4 * iVar2 + iVar7) * 8) =
                     *(undefined4 *)(*(int *)(param_1 + 6) + ((uint)param_1[3] * iVar2 + iVar7) * 4)
                ;
                *(undefined4 *)
                 (*(int *)(param_1 + 0x22) + 4 + ((uint)(byte)param_1[0x20] * iVar2 + iVar7) * 8) =
                     *(undefined4 *)(*(int *)(param_1 + 8) + ((uint)param_1[3] * iVar2 + iVar7) * 4)
                ;
              }
              iVar7 = iVar7 + 1;
              uVar4 = (uint)(byte)param_1[0x20];
            } while (iVar7 < (int)uVar4);
          }
        }
        if ((*param_1 & 0x10) == 0) {
          uVar4 = __ftol();
          iVar7 = __ftol();
          uVar5 = __ftol();
          uVar6 = __ftol();
          *(uint *)(*(int *)(param_1 + 0x28) + 0x10 + iStack0000000c) =
               ((uVar4 | iVar7 << 8) << 8 | uVar5) << 8 | uVar6;
        }
        else if ((*param_1 & 0x20) == 0) {
          uVar4 = __ftol();
          iVar7 = __ftol();
          uVar5 = __ftol();
          uVar6 = __ftol();
          *(uint *)(*(int *)(param_1 + 0x28) + 0x10 + iStack0000000c) =
               ((uVar4 | iVar7 << 8) << 8 | uVar5) << 8 | uVar6;
        }
        else {
          uVar4 = __ftol();
          iVar7 = __ftol();
          uVar5 = __ftol();
          uVar6 = __ftol();
          *(uint *)(*(int *)(param_1 + 0x28) + 0x10 + iStack0000000c) =
               ((uVar4 | iVar7 << 8) << 8 | uVar5) << 8 | uVar6;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x14 + iStack0000000c) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(param_1 + 0x26) + iStack0000000c) =
             *(undefined4 *)(param_2 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        *(undefined4 *)(*(int *)(param_1 + 0x26) + 4 + iStack0000000c) =
             *(undefined4 *)
              (param_2 + 4 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        *(undefined4 *)(*(int *)(param_1 + 0x26) + 8 + iStack0000000c) =
             *(undefined4 *)
              (param_2 + 8 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        if ((*param_1 & 2) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x18 + iStack0000000c) =
               *(undefined4 *)
                (param_2 + 0xc + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
          iVar7 = *(int *)(param_1 + 0x26);
          uVar3 = *(undefined4 *)
                   (param_2 + 0x10 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x18 + iStack0000000c) =
               *(undefined4 *)(*(int *)(param_1 + 6) + iVar2 * 4);
          iVar7 = *(int *)(param_1 + 0x26);
          uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4);
        }
        *(undefined4 *)(iVar7 + 0x1c + iStack0000000c) = uVar3;
        if ((byte)param_1[0x20] != 0) {
          iVar7 = 0;
          uVar4 = (uint)(byte)param_1[0x20];
          if (uVar4 != 0) {
            do {
              if ((*param_1 & 2) == 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x22) + (uVar4 * iVar2 + iVar7) * 8) =
                     *(undefined4 *)
                      (*(int *)(param_2 + 0x14 +
                               (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c) +
                      iVar7 * 8);
                *(undefined4 *)
                 (*(int *)(param_1 + 0x22) + 4 + ((uint)(byte)param_1[0x20] * iVar2 + iVar7) * 8) =
                     *(undefined4 *)
                      (*(int *)(param_2 + 0x14 +
                               (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x1c) + 4 +
                      iVar7 * 8);
              }
              else {
                *(undefined4 *)(*(int *)(param_1 + 0x22) + (uVar4 * iVar2 + iVar7) * 8) =
                     *(undefined4 *)(*(int *)(param_1 + 6) + ((uint)param_1[3] * iVar2 + iVar7) * 4)
                ;
                *(undefined4 *)
                 (*(int *)(param_1 + 0x22) + 4 + ((uint)(byte)param_1[0x20] * iVar2 + iVar7) * 8) =
                     *(undefined4 *)(*(int *)(param_1 + 8) + ((uint)param_1[3] * iVar2 + iVar7) * 4)
                ;
              }
              iVar7 = iVar7 + 1;
              uVar4 = (uint)(byte)param_1[0x20];
            } while (iVar7 < (int)uVar4);
          }
        }
        if ((*param_1 & 0x10) == 0) {
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0xc + iStack0000000c) =
               *(undefined4 *)(param_1 + 0x10);
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x10 + iStack0000000c) =
               *(undefined4 *)(param_1 + 0x12);
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x14 + iStack0000000c) =
               *(undefined4 *)(param_1 + 0x14);
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0xc + iStack0000000c) =
               *(undefined4 *)(*(int *)(param_1 + 0xc) + local_8);
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x10 + iStack0000000c) =
               *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + local_8);
          *(undefined4 *)(*(int *)(param_1 + 0x26) + 0x14 + iStack0000000c) =
               *(undefined4 *)(*(int *)(param_1 + 0xc) + 8 + local_8);
        }
      }
      iVar2 = iVar2 + 1;
      local_8 = local_8 + 0xc;
      iStack0000000c = iStack0000000c + 0x20;
    } while (iVar2 < (int)(uint)param_1[2]);
  }
  param_1[0x1a] = param_1[2];
  FUN_005e5300(param_3,(int)(short)param_1[0x18]);
  return;
}

