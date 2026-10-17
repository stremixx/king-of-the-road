
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480310(undefined4 *param_1)

{
  double dVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 auStack_b8 [7];
  undefined4 uStack_9c;
  double *pdStack_98;
  uint *puStack_94;
  double local_80;
  undefined4 local_78 [6];
  uint local_60;
  undefined1 local_58 [32];
  uint local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar3 = DAT_0068be9c;
  if (DAT_0068be98 == DAT_0068be9c) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    puStack_94 = (uint *)0x48034e;
    uVar4 = __ftol();
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    local_80 = (double)(ulonglong)((uint)(&DAT_0068a928)[DAT_0068aa04] % uVar4);
    dVar1 = (double)(longlong)local_80 * _DAT_0064a590 - _DAT_0064a660;
    piVar2 = DAT_0068be98;
    if (dVar1 < _DAT_0064a668) {
      dVar1 = _DAT_0064a668;
    }
    for (; piVar2 != piVar3; piVar2 = piVar2 + 1) {
      if (dVar1 < *(double *)(*piVar2 + 0x28)) {
        puStack_94 = (uint *)*piVar2;
        pdStack_98 = (double *)local_78;
        local_80 = (dVar1 - *(double *)((int)puStack_94 + 0x28)) +
                   *(double *)((int)puStack_94 + 0x18);
        uStack_9c = 0x480433;
        FUN_0047fe10();
        if (_DAT_0064a668 <= local_80) {
          pdStack_98 = &local_80;
          puStack_94 = (uint *)0x0;
          puVar5 = local_78;
          puVar7 = auStack_b8;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar5 = (undefined4 *)FUN_00435e40(local_58);
          puVar7 = local_78;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          puStack_94 = local_38;
          local_14 = 0xffffffff;
          local_10 = 0xffffffff;
          local_38[0] = 0;
          puVar5 = local_78;
          puVar7 = auStack_b8 + 1;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
          local_30 = 0;
          local_2c = 0;
          local_28 = s_UNDEFINED_MODULE_0066c638;
          local_24 = s_UNDEFINED_ROOM_0066c628;
          local_20 = 0;
          local_1c = 0;
          auStack_b8[0] = 0x4804ec;
          FUN_00438e50();
          if ((local_38[0] & 8) != 0) {
            local_60 = local_60 | 1;
          }
        }
        puVar5 = local_78;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *param_1 = *puVar5;
          puVar5 = puVar5 + 1;
          param_1 = param_1 + 1;
        }
        return;
      }
    }
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  return;
}

