
void __thiscall FUN_00612030(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0060a120(2,s_Assertion_violated___s__File_____006716a4,&DAT_00684bcc,
                 s_C__Nek_VRAPPLVS_marine_mygreed_c_00684b88,0x10e,s_Mar_19_2002_006714f8);
  }
  FUN_004843e0(param_2);
  uVar5 = DAT_00724dac;
  DAT_00724dac = 10;
  uVar7 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      FUN_00611f40(**(undefined4 **)(*(int *)(param_1 + 8) + uVar7 * 4));
      FUN_0060ce30();
      FUN_00611f40(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + uVar7 * 4) + 4));
      FUN_0060ce30();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x30));
  }
  FUN_004843e0();
  iVar8 = **(int **)(param_1 + 0x20);
  DAT_00724dac = uVar5;
  if (iVar8 != 0) goto LAB_006120dc;
  iVar8 = (*(int **)(param_1 + 0x20))[1];
  while (iVar8 != 0) {
LAB_006120dc:
    if ((*(int *)(iVar8 + 0x38) == 0) &&
       ((iVar1 = *(int *)(iVar8 + 0x30), iVar1 != 0 || (*(int *)(iVar8 + 0x34) != 0)))) {
      piVar2 = *(int **)(*(int *)(iVar8 + 0x20) + 8);
      if ((*piVar2 != 0) && (piVar2[1] != 0)) {
        iVar6 = *(int *)(*piVar2 + 0xc);
        if (*(int *)(piVar2[1] + 0xc) == iVar8) {
          if (iVar6 == iVar8) goto LAB_00612149;
          if (iVar1 == 0) {
            if (*(int *)(*(int *)(iVar8 + 0x34) + 0x34) != 0) goto LAB_006121c1;
            iVar6 = 0;
LAB_006121a5:
            piVar4 = (int *)piVar2[2];
            if ((piVar4 == (int *)0x0) || ((*piVar4 != 0 && (piVar4[1] != 0)))) goto LAB_006121c1;
          }
          else {
            if ((*(int *)(iVar1 + 0x30) == 0) ||
               (iVar6 = *(int *)(*(int *)(iVar1 + 0x20) + 8),
               iVar6 != *(int *)(*(int *)(*(int *)(iVar1 + 0x30) + 0x20) + 8))) goto LAB_006121c1;
LAB_006121a1:
            if (iVar6 == 0) goto LAB_006121a5;
          }
          FUN_00605b80(piVar2,iVar6);
        }
        else if (iVar6 == iVar8) {
LAB_00612149:
          iVar3 = *(int *)(iVar8 + 0x34);
          if (iVar3 == 0) {
            iVar6 = 0;
            if (*(int *)(iVar1 + 0x30) == 0) goto LAB_006121a5;
          }
          else if ((*(int *)(iVar3 + 0x34) != 0) &&
                  (iVar6 = *(int *)(*(int *)(iVar3 + 0x20) + 8),
                  iVar6 == *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0x20) + 8)))
          goto LAB_006121a1;
        }
        else {
          FUN_0060a190(0x88762712,s_File____s__Line_____ld__Date_____006714b0,
                       s_C__Nek_VRAPPLVS_marine_greed_inl_00683954,0x114,s_Mar_19_2002_006714f8);
        }
      }
    }
LAB_006121c1:
    piVar2 = *(int **)(param_1 + 0x20);
    if ((*piVar2 == 0) || (iVar8 + 4 != *(int *)(*piVar2 + 8))) {
      if (((piVar2[1] != 0) && (iVar8 + 4 == *(int *)(piVar2[1] + 8))) || (*(int *)(iVar8 + 4) == 0)
         ) break;
      iVar8 = *(int *)(iVar8 + 4) + -4;
    }
    else {
      iVar8 = piVar2[1];
    }
  }
  FUN_0060ce30();
  FUN_0060ce60();
  return;
}

