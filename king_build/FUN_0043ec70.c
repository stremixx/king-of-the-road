
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043ec70(undefined4 param_1,int param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  double *pdVar6;
  int *piVar7;
  bool bVar8;
  int aiStack_f4 [2];
  double local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  double local_74;
  int local_6c [2];
  double local_64;
  int local_5c;
  int local_58;
  int local_54;
  char *local_4c;
  undefined *local_48;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063dc48;
  local_14 = ExceptionList;
  local_dc = 1.69792922906944e-313;
  local_4c = s_seeIfMustBeRetraced_RoomId_room__0066dc0c;
  local_48 = &DAT_0071d768;
  local_e4 = (double)CONCAT44(0x43ecbb,(undefined4)local_e4);
  ExceptionList = &local_14;
  FUN_00401870();
  local_dc = 1.0172841038538898e-306;
  FUN_004018b0();
  iVar2 = param_2;
  local_c = 0;
  if (((*(int *)(param_2 + 0x5c) != 1) && (*(int *)(param_2 + 0x18) != *(int *)(param_2 + 0x1c))) &&
     ((*(byte *)(param_2 + 0x60) & 1) != 0)) {
    puVar4 = (undefined4 *)(param_2 + 0x270);
    pdVar6 = &local_b4;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      pdVar6 = (double *)((int)pdVar6 + 4);
    }
    puVar4 = (undefined4 *)(param_2 + 0x28);
    piVar5 = aiStack_f4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    FUN_00435cd0(&local_44);
    local_dc = local_34 - local_a4;
    local_e4 = local_3c - local_ac;
    local_ec = local_44 - local_b4;
    aiStack_f4[1] = 0x43ed6f;
    FUN_00405ea0();
    dVar1 = SQRT(local_8c * local_8c + local_94 * local_94 + local_9c * local_9c);
    bVar8 = _DAT_0064a928 < dVar1;
    if ((dVar1 <= _DAT_0064a778) || (local_8c <= SQRT(local_94 * local_94 + local_9c * local_9c))) {
      if (!bVar8) goto LAB_0043ef11;
    }
    else {
      bVar8 = true;
    }
    local_dc = (double)CONCAT44(&local_b4,param_1);
    local_e4 = (double)CONCAT44(local_6c,0x43edf7);
    FUN_00436cb0();
    if (((local_6c[0] != -1) || (local_6c[1] != -1)) ||
       ((local_64 != _DAT_0064a668 || (((local_5c != 0 || (local_58 != 0)) || (local_54 != 0)))))) {
      piVar5 = local_6c;
      piVar7 = aiStack_f4;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      FUN_00435cd0(&local_2c);
      local_dc = local_1c - local_a4;
      local_e4 = local_24 - local_ac;
      local_ec = local_2c - local_b4;
      aiStack_f4[1] = 0x43ee99;
      FUN_00405ea0();
      dVar1 = SQRT(local_84 * local_84 + local_74 * local_74 + local_7c * local_7c);
      if (((_DAT_0064a778 <= dVar1) && ((_DAT_0064a928 <= dVar1 || (_DAT_0064a7b0 <= local_74)))) &&
         (bVar8)) {
        local_dc = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar2 + 0x1c) + -0xc),
                                    *(int *)(iVar2 + 0x1c));
        local_e4 = (double)CONCAT44(&param_2,0x43ef09);
        FUN_0041d3f0();
        local_e4 = (double)CONCAT44(0x43ef0e,(undefined4)local_e4);
        FUN_00487330();
      }
    }
  }
LAB_0043ef11:
  local_dc = 1.6979292257098e-313;
  local_e4 = (double)CONCAT44(0x43ef22,(undefined4)local_e4);
  FUN_00401870();
  local_dc = 1.017284103853987e-306;
  FUN_004018b0();
  ExceptionList = local_14;
  return;
}

