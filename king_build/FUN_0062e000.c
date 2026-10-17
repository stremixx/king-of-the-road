
void FUN_0062e000(byte *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte local_5;
  ushort *local_4;
  
  iVar3 = (int)param_1;
  uVar6 = 0;
  local_5 = 0;
  if (DAT_0077bf44 != 0) {
    param_1 = &DAT_0077a588;
    local_4 = (ushort *)&DAT_00769f30;
    do {
      if ((uVar6 & 7) == 0) {
        local_5 = *param_1;
        param_1 = param_1 + 1;
      }
      uVar7 = (uint)(byte)(&DAT_0072d594)[uVar6];
      uVar6 = uVar6 + 1;
      if ((local_5 & 1) == 0) {
        uVar4 = (uint)*(ushort *)(iVar3 + 2 + uVar7 * 4);
        uVar7 = (uint)*(ushort *)(iVar3 + uVar7 * 4);
LAB_0062e113:
        FUN_0062e200(uVar7,uVar4);
      }
      else {
        uVar4 = (uint)*(byte *)((int)&DAT_0077a488 + uVar7);
        FUN_0062e200(*(undefined2 *)(iVar3 + 0x404 + uVar4 * 4),
                     *(undefined2 *)(iVar3 + 0x406 + uVar4 * 4));
        if ((&DAT_00689368)[uVar4] != 0) {
          FUN_0062e200(uVar7 - (&DAT_0077b588)[uVar4],(&DAT_00689368)[uVar4]);
        }
        uVar2 = *local_4;
        uVar7 = (uint)uVar2;
        local_4 = local_4 + 1;
        if (uVar7 < 0x100) {
          bVar1 = *(byte *)((int)&DAT_0077b600 + uVar7);
        }
        else {
          bVar1 = (&DAT_0077b700)[uVar2 >> 7];
        }
        uVar5 = (uint)bVar1;
        FUN_0062e200(*(undefined2 *)(param_2 + uVar5 * 4),*(undefined2 *)(param_2 + 2 + uVar5 * 4));
        uVar4 = (&DAT_006893dc)[uVar5];
        if (uVar4 != 0) {
          uVar7 = uVar7 - (&DAT_0077c8e0)[uVar5];
          goto LAB_0062e113;
        }
      }
      local_5 = local_5 >> 1;
    } while (uVar6 < DAT_0077bf44);
  }
  FUN_0062e200(*(undefined2 *)(iVar3 + 0x400),*(undefined2 *)(iVar3 + 0x402));
  return;
}

