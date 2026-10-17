
void __fastcall FUN_0055c890(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float unaff_EBX;
  float10 fVar9;
  float *pfStack_74;
  float *pfStack_70;
  float fStack_6c;
  undefined1 **ppuStack_68;
  float fStack_64;
  char *pcStack_60;
  float fStack_5c;
  undefined1 *puStack_50;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_2c;
  float fStack_10;
  float fStack_c;
  
  puStack_50 = *(undefined1 **)(param_1 + 0xf98);
  FUN_0058e9d0();
  puStack_50 = (undefined1 *)0x55c8b3;
  fVar9 = (float10)FUN_004e1fd9();
  piVar1 = (int *)(param_1 + 0x10);
  puStack_50 = &stack0x00000004;
  iVar6 = (**(code **)(*(int *)(param_1 + 0x10) + 0x54))();
  pcStack_60 = (char *)0x55c8e2;
  fStack_5c = (float)fVar9;
  iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x54))();
  if ((iVar6 != 0) && (iVar7 != 0)) {
    pcStack_60 = &stack0xffffffb4;
    fStack_64 = fStack_c;
    ppuStack_68 = (undefined1 **)0x55c90d;
    iVar6 = (**(code **)(*piVar1 + 0x60))();
    if (iVar6 == 0) {
      ppuStack_68 = (undefined1 **)s__VEH_Tractor__Move______MoveItem_006794f8;
      fStack_6c = 7.87816e-39;
      FUN_004e1e9c();
    }
    ppuStack_68 = &puStack_50;
    fStack_6c = fStack_10;
    pfStack_70 = (float *)0x55c937;
    iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x60))();
    if (iVar6 == 0) {
      pfStack_70 = (float *)s__VEH_Tractor__Move______semitr_>_006794c8;
      pfStack_74 = (float *)0x55c945;
      FUN_004e1e9c();
    }
    iVar7 = 1;
    iVar6 = 1;
    while ((iVar7 != 0 || (iVar6 != 0))) {
      pfStack_70 = &fStack_5c;
      pfStack_74 = (float *)0x55c967;
      (**(code **)(*piVar1 + 100))();
      pfStack_74 = &fStack_5c;
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 100))();
      (**(code **)(*piVar1 + 0x68))(0x3f800000);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x68))(0x3f800000);
      (**(code **)(*piVar1 + 0x6c))(uStack_2c);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x6c))(uStack_2c);
      iVar6 = *(int *)(param_1 + 0x698);
      if ((iVar6 == 0) && (*(int *)(*(int *)(param_1 + 0x5578) + 0x698) == 0)) {
        iVar7 = (**(code **)(*piVar1 + 0x70))(&pfStack_74);
        iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x70))(&pfStack_74);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x5578);
        *(undefined4 *)(param_1 + 0x557c) = 1;
        pfVar2 = (float *)(param_1 + 0x5c0);
        pfVar8 = (float *)(iVar7 + 0x5c0);
        if (*pfVar2 <= *(float *)(iVar7 + 0x5c0)) {
          pfVar8 = pfVar2;
        }
        fVar4 = *pfVar8;
        if ((iVar6 == 0) || (*(int *)(iVar7 + 0x698) != 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        fStack_6c = fVar4;
        if ((iVar6 == 0) || (*(int *)(iVar7 + 0x698) == 0)) {
          if (bVar5) goto LAB_0055cb8b;
LAB_0055ca6f:
          (**(code **)(*piVar1 + 0x68))(fVar4);
          iVar6 = *(int *)(param_1 + 0x5578);
          if (*(int *)(iVar6 + 0x414) != 0) {
            *(float *)(iVar6 + 0xcd4) = *(float *)(iVar6 + 0x19c) + *(float *)(param_1 + 0x19c);
            iVar6 = *(int *)(param_1 + 0x5578);
            puStack_50 = *(undefined1 **)(iVar6 + 0x1a8);
            fVar3 = *(float *)(param_1 + 0x1a8);
            unaff_EBX = *(float *)(iVar6 + 0x1ac) + *(float *)(param_1 + 0x1ac);
            *(float *)(iVar6 + 0xce8) = *(float *)(iVar6 + 0x1a4) + *(float *)(param_1 + 0x1a4);
            *(float *)(iVar6 + 0xcec) = (float)puStack_50 + fVar3;
            *(float *)(iVar6 + 0xcf0) = unaff_EBX;
          }
          (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x78))((float)fVar9,fVar4);
          *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0xcd4) =
               *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0x19c);
          iVar6 = *(int *)(param_1 + 0x5578);
          *(undefined4 *)(iVar6 + 0xce8) = *(undefined4 *)(iVar6 + 0x1a4);
          *(undefined4 *)(iVar6 + 0xcec) = *(undefined4 *)(iVar6 + 0x1a8);
          *(undefined4 *)(iVar6 + 0xcf0) = *(undefined4 *)(iVar6 + 0x1ac);
          FUN_0055c340();
          (**(code **)(*piVar1 + 0x74))();
          iVar7 = 0;
          (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x7c))(uStack_3c);
          iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x80))();
        }
        else {
          if (*(float *)(iVar7 + 0x5c0) <= *pfVar2) goto LAB_0055ca6f;
LAB_0055cb8b:
          (**(code **)(*(int *)(iVar7 + 0x10) + 0x68))(fVar4);
          iVar6 = FUN_0057c0a0(*(undefined4 *)(param_1 + 0x414));
          if (iVar6 != 0) {
            iVar6 = *(int *)(param_1 + 0x5578);
            *(float *)(param_1 + 0xcd4) = *(float *)(iVar6 + 0x19c) + *(float *)(param_1 + 0x19c);
            fStack_6c = *(float *)(iVar6 + 0x1a4);
            pcStack_60 = (char *)(fStack_6c + *(float *)(param_1 + 0x1a4));
            ppuStack_68 = *(undefined1 ***)(iVar6 + 0x1a8);
            fStack_5c = (float)ppuStack_68 + *(float *)(param_1 + 0x1a8);
            fStack_64 = *(float *)(iVar6 + 0x1ac);
            *(char **)(param_1 + 0xce8) = pcStack_60;
            *(float *)(param_1 + 0xcec) = fStack_5c;
            *(float *)(param_1 + 0xcf0) = fStack_64 + *(float *)(param_1 + 0x1ac);
          }
          (**(code **)(*piVar1 + 0x78))(uStack_38,fVar4);
          *(undefined4 *)(param_1 + 0xcd4) = *(undefined4 *)(param_1 + 0x19c);
          *(undefined4 *)(param_1 + 0xce8) = *(undefined4 *)(param_1 + 0x1a4);
          *(undefined4 *)(param_1 + 0xcec) = *(undefined4 *)(param_1 + 0x1a8);
          *(undefined4 *)(param_1 + 0xcf0) = *(undefined4 *)(param_1 + 0x1ac);
          FUN_0055c340();
          (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x74))();
          (**(code **)(*piVar1 + 0x7c))(unaff_EBX);
          iVar7 = (**(code **)(*piVar1 + 0x80))();
          iVar6 = 0;
        }
      }
    }
    pfStack_70 = &fStack_5c;
    pfStack_74 = (float *)0x55cc99;
    (**(code **)(*piVar1 + 0x84))();
    pfStack_74 = &fStack_5c;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x84))();
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0x5b0) = 0;
  }
  if ((*(int *)(param_1 + 0x184) != 0) || (*(int *)(*(int *)(param_1 + 0x5578) + 0x184) != 0)) {
    pcStack_60 = s__VEH_Tractor__Move____this_and_o_00679488;
    fStack_64 = 7.87953e-39;
    FUN_004e1e9c();
  }
  fStack_64 = 7.879552e-39;
  (**(code **)(*piVar1 + 0x58))();
  ppuStack_68 = (undefined1 **)0x55cd10;
  (**(code **)(*(int *)(*(int *)(param_1 + 0x5578) + 0x10) + 0x58))();
  return;
}

