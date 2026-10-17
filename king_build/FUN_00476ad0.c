
void FUN_00476ad0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = DAT_0068bbe8;
  DAT_0068c0ec = DAT_0068c0ec + 1;
  if (*(int *)(param_1 + 0x9c) == -1) {
    iVar3 = 0;
    do {
      DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
      DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
      (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
      uVar1 = (&DAT_0068a928)[DAT_0068aa04] & 7;
      if ((puVar2[uVar1] & 1) == 0) {
        puVar2[uVar1] = puVar2[uVar1] | 1;
        *(uint *)(param_1 + 0x9c) = uVar1;
        puVar2 = DAT_0068bbe8;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
    if (*(int *)(param_1 + 0x9c) == -1) {
      for (; iVar3 < 8; iVar3 = iVar3 + 1) {
        if ((*puVar2 & 1) == 0) {
          *puVar2 = *puVar2 | 1;
          *(undefined4 *)(param_1 + 0x9c) = 0;
          break;
        }
      }
    }
    if (*(int *)(param_1 + 0x9c) == -1) {
      FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                   s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x526,
                   s_Can_not_allocate_a_logo_0066eaa0,&DAT_0068c120,&DAT_0068c120);
    }
  }
  return;
}

