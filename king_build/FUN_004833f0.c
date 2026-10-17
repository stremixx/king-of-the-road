
void __fastcall FUN_004833f0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*DAT_0068a8f0;
  if (piVar2 != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(piVar2);
      if (*(char *)(iVar1 + 0x318) == '\0') {
        FUN_004042b0(piVar2);
        FUN_004200f0(param_1);
      }
      else {
        FUN_00401010(0,100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                     s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x2e5,
                     s_Internal_error_08457_0066eefc,&DAT_0068c120,&DAT_0068c120);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != DAT_0068a8f0);
  }
  return;
}

