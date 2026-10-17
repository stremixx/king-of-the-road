
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_005c2ee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  byte local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2800(param_2,param_3);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *param_1 = &PTR_LAB_0065094c;
  _DAT_00706ed0 = PTR_FUN_0067eabc;
  PTR_FUN_0067eabc = &LAB_005c2ec0;
  local_4 = 0;
  DAT_00706ecc = param_1;
  GetPrivateProfileStringA
            (&DAT_006720a0,(LPCSTR)&PTR_DAT_0067e7bc,&DAT_006719a8,(LPSTR)local_4c,0x10,
             (LPCSTR)param_1[0x46]);
  pbVar4 = &DAT_00671994;
  pbVar2 = local_4c;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005c2f96:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005c2f9b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005c2f96;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005c2f9b:
  if (iVar3 == 0) {
    param_1[0x68] = 1;
  }
  else {
    param_1[0x68] = 0;
  }
  if (param_1[0x68] != 0) {
    local_56 = 0x74;
    local_55 = 0x74;
    local_52 = 0x74;
    local_58 = 0x6e;
    local_57 = 0x65;
    local_54 = 0x65;
    local_53 = 0x73;
    local_51 = 0;
    local_50 = 0;
    iVar3 = FUN_00601860(&local_58);
    if (iVar3 != 0) {
      param_1[0x68] = 0;
    }
  }
  param_1[0x6e] = 1;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  ExceptionList = local_c;
  return param_1;
}

