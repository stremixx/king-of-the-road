
void FUN_0052a470(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_68;
  undefined1 local_64 [100];
  
  local_68 = 0;
  if (0 < DAT_006cd2ac) {
    puVar4 = &DAT_006c5ac8;
    puVar3 = &DAT_006cdd0c;
    do {
      FUN_0061c369(local_64,s__s_car_cl_006773f4,puVar4);
      uVar1 = FUN_005eea00(local_64);
      puVar3[-5] = uVar1;
      *puVar3 = 0;
      if (puVar3[-5] == 0) {
        iVar2 = 0;
        puVar5 = puVar3;
        do {
          iVar2 = iVar2 + 1;
          FUN_0061c369(local_64,s__s_d_car_cl_006773e8,puVar4,iVar2);
          uVar1 = FUN_005eea00(local_64);
          puVar5[-5] = uVar1;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        } while (iVar2 < 5);
      }
      else {
        iVar2 = 4;
        puVar5 = puVar3;
        do {
          puVar5[-4] = 0;
          puVar5[1] = 0;
          iVar2 = iVar2 + -1;
          puVar5 = puVar5 + 1;
        } while (iVar2 != 0);
      }
      FUN_0061c369(local_64,s_hit__s_006773e0,puVar4);
      iVar2 = FUN_005ee8e0(0,local_64);
      puVar3[5] = 0;
      if (iVar2 != 0) {
        uVar1 = FUN_005ee8e0(iVar2,s_CollisionKey_006773d0);
        puVar3[5] = uVar1;
      }
      local_68 = local_68 + 1;
      puVar4 = puVar4 + 0xdb;
      puVar3 = puVar3 + 0xb;
    } while (local_68 < DAT_006cd2ac);
  }
  return;
}

