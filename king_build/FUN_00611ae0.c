
void __thiscall FUN_00611ae0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_EBX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (**(code **)(*param_2 + 0x50))(param_2,0x88,1);
  (**(code **)(*unaff_EBX + 8))
            (*(undefined4 *)(*(int *)(*(int *)(DAT_00724d68 + 0x1e8) + 0x4c) + 0x24));
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  uVar1 = FUN_00604ed0(1,0,0);
  FUN_005b06d0(uVar1,uVar3,uVar4,uVar5);
  iVar2 = (**(code **)(*param_2 + 0x68))
                    (param_2,4,0x312,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78)
                     ,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80),0);
  if (iVar2 < 0) {
    FUN_0060a190(iVar2,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_marine_test_inl_00684bac,0x14b,s_Mar_19_2002_006714f8);
  }
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 1;
  uVar1 = FUN_00604ed0(1,0,0);
  FUN_005b06d0(uVar1,uVar3,uVar4,uVar5);
  iVar2 = (**(code **)(*param_2 + 0x68))
                    (param_2,4,0x312,*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x78)
                     ,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x88),0);
  if (iVar2 < 0) {
    FUN_0060a190(iVar2,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_marine_test_inl_00684bac,0x134,s_Mar_19_2002_006714f8);
  }
  (**(code **)(*unaff_EBX + 8))(*(undefined4 *)(DAT_00724d68 + 0x1d4));
  FUN_006127e0(param_2,unaff_EBX,*(undefined4 *)(param_1 + 0x74));
  return;
}

