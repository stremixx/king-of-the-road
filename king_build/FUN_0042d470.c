
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d470(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_c;
  
  piVar5 = (int *)*DAT_0068a8f0;
  piVar4 = local_c;
  if (piVar5 != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(piVar5);
      if (iVar1 != 0) {
        iVar2 = FUN_0040a950(piVar5);
        iVar1 = *(int *)(iVar2 + 0x200);
        if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
          iVar1 = *(int *)(iVar2 + 0x1fc);
          if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == -1)) {
            FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                         s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
          }
          else {
            local_c = (int *)(iVar1 + 0x1c);
          }
        }
        else {
          local_c = (int *)(iVar1 + 0x1c);
        }
        iVar1 = *local_c;
        while( true ) {
          iVar3 = FUN_0040a950(piVar5);
          iVar2 = *(int *)(iVar3 + 0x200);
          if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
            iVar2 = *(int *)(iVar3 + 0x1fc);
            if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == -1)) {
              FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_play_h_0066c3fc,
                           s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2e4,
                           s_Internal_error_9012_0066c41c,&DAT_0068c120,&DAT_0068c120);
            }
            else {
              piVar4 = (int *)(iVar2 + 0x1c);
            }
          }
          else {
            piVar4 = (int *)(iVar2 + 0x1c);
          }
          if (iVar1 == piVar4[1]) break;
          if ((*(double *)(iVar1 + 0x38) < _DAT_0064a668) ||
             (_DAT_0064a6a0 < *(double *)(iVar1 + 0x38))) {
            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2da4,
                         s_Internal_error_9903_0066cda0,&DAT_0068c120,&DAT_0068c120);
          }
          iVar1 = iVar1 + 0x90;
        }
        iVar1 = FUN_0040a950(piVar5);
        if (*(int *)(iVar1 + 0x54) == 9) {
          iVar1 = FUN_0040a950(piVar5);
          if ((*(uint *)(iVar1 + 0x58) >> 2 & 1) == 0) {
            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2dab,
                         s_Internal_error_9967_0066cd8c,&DAT_0068c120,&DAT_0068c120);
          }
          iVar1 = FUN_0040a950(piVar5);
          if ((*(byte *)(iVar1 + 0x58) & 0x40) == 0) {
            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2dad,
                         s_Internal_error_9969_0066cd78,&DAT_0068c120,&DAT_0068c120);
          }
          iVar1 = FUN_0040a950(piVar5);
          if (*(int *)(iVar1 + 0x5c) != 0x100) {
            FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2daf,
                         s_Internal_error_9971_0066cd64,&DAT_0068c120,&DAT_0068c120);
          }
        }
        iVar1 = FUN_0040a950(piVar5);
        if ((*(int *)(iVar1 + 0x5c) == 0x100) &&
           (iVar1 = FUN_0040a950(piVar5), *(int *)(iVar1 + 0x54) != 9)) {
          FUN_00401010(0,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2db4,
                       s_Internal_error_9972_0066cd50,&DAT_0068c120,&DAT_0068c120);
        }
      }
      piVar5 = (int *)*piVar5;
    } while (piVar5 != DAT_0068a8f0);
  }
  return;
}

