
undefined4 FUN_0051c050(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 unaff_EDI;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  iStack_20 = DAT_006cdc38 + 0x278;
  puStack_1c = (undefined1 *)0x1;
  local_4 = 0;
  piStack_24 = (int *)0x51c074;
  piVar2 = (int *)FUN_0051b780();
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    puStack_1c = local_8;
    iStack_20 = 0;
    piStack_24 = (int *)0x0;
    uStack_28 = 0x10;
    uStack_2c = 0;
    pcStack_30 = s_listofgames_006757d4;
    piStack_34 = (int *)0x51c094;
    pcStack_30 = (char *)FUN_0050b500();
    piStack_38 = (int *)0x51c09c;
    piStack_34 = piVar2;
    (**(code **)(iVar1 + 0x18))();
    if (piStack_24 != (int *)0x0) {
      iVar1 = *piStack_24;
      piStack_38 = &uStack_28;
      iStack_3c = 0;
      uVar8 = 0;
      uVar3 = FUN_0050b500(unaff_EDI,0);
      (**(code **)(iVar1 + 0x18))(piStack_24,uVar3);
      iVar1 = iRam00000010;
      piVar7 = &iStack_3c;
      piVar6 = (int *)0x10;
      piVar5 = (int *)0x0;
      piVar4 = (int *)FUN_0050b500(&DAT_00676200,0,0x10,0);
      (**(code **)(iVar1 + 0x10))(0x10);
      if (piVar7 != (int *)0x0) {
        uVar3 = FUN_0050bb70(piVar7,uVar8);
        (**(code **)(*piVar7 + 8))(piVar7);
        (**(code **)(*piVar5 + 8))(piVar5);
        (**(code **)(*piVar2 + 8))(piVar2);
        (**(code **)(*piVar4 + 8))(piVar4);
        return uVar3;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      (**(code **)(iRam00000000 + 8))(0);
    }
    iStack_3c = 0x51c111;
    piStack_38 = piVar2;
    (**(code **)(*piVar2 + 8))();
  }
  return 0;
}

