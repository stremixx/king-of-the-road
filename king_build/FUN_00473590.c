
void __thiscall FUN_00473590(uint *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  
  if ((param_2 != 0xffffffff) && (piVar3 = (int *)*DAT_0068a8f0, piVar3 != DAT_0068a8f0)) {
    do {
      iVar1 = FUN_0040a950(piVar3);
      if (iVar1 != 0) {
        puVar2 = (uint *)FUN_0040a950(piVar3);
        if (puVar2 != param_1) {
          iVar1 = FUN_0040a950(piVar3);
          if (*(uint *)(iVar1 + 0x4c) == param_2) {
            puVar2 = (uint *)FUN_0040a950(piVar3);
            FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                         s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x18e,s_Duplicate_vrId_0066ea3c
                         ,-(uint)(*param_1 != param_1[1]) & *param_1,
                         -(uint)(*puVar2 != puVar2[1]) & *puVar2);
          }
        }
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_0068a8f0);
  }
  param_1[0x13] = param_2;
  return;
}

