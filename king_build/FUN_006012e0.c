
undefined4
FUN_006012e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  HGLOBAL pvVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int *piVar4;
  LPCVOID unaff_EDI;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [4];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  
  DAT_00722d38 = param_5 != 0;
  local_68 = CONCAT31(local_68._1_3_,DAT_00722d38);
  FUN_00600d60();
  uVar7 = local_68;
  local_60[0] = param_1;
  local_60[1] = param_2;
  local_60[2] = param_3;
  local_60[3] = param_4;
  piVar1 = DAT_00722cc0;
  if (DAT_00722cc0 != DAT_00722cc4) {
    do {
      iVar3 = 4;
      bVar6 = true;
      piVar4 = piVar1;
      piVar5 = local_60;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
    } while ((!bVar6) && (piVar1 = piVar1 + 8, piVar1 != DAT_00722cc4));
    if (piVar1 != DAT_00722cc4) {
      FUN_00600c40();
      local_6c = (int *)0x0;
      CoCreateInstance((IID *)&DAT_006542e0,(LPUNKNOWN)0x0,1,(IID *)&DAT_006542f0,&local_6c);
      local_70 = 0;
      local_64 = 0;
      FUN_00600f00(local_6c,&param_1,&local_70,&local_64,uVar7);
      (**(code **)(*local_6c + 8))(local_6c);
      local_70 = 0;
      uVar7 = 0;
      iVar3 = (**(code **)(*DAT_00722d3c + 0x98))(DAT_00722d3c,unaff_EBX,0);
      if (iVar3 == -0x7788fffb) {
        (**(code **)(*DAT_00722d3c + 0x10))(DAT_00722d3c);
        (**(code **)(*DAT_00722d3c + 8))(DAT_00722d3c);
        DAT_00722d3c = (int *)0x0;
        FUN_00600c40();
        iVar3 = (**(code **)(*DAT_00722d3c + 0x98))(DAT_00722d3c,uVar7,0);
      }
      pvVar2 = GlobalHandle(unaff_EDI);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(unaff_EDI);
      GlobalFree(pvVar2);
      if (iVar3 < 0) {
        (**(code **)(*DAT_00722d3c + 0x10))(DAT_00722d3c);
        (**(code **)(*DAT_00722d3c + 8))(DAT_00722d3c);
        DAT_00722d3c = (int *)0x0;
        return 3;
      }
      piVar1 = local_60;
      for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar1 = 0;
        piVar1 = piVar1 + 1;
      }
      local_60[2] = DAT_00682bf8;
      uStack_48 = DAT_00682bf8;
      local_60[0] = 0x50;
      local_60[3] = DAT_00682bfc;
      uStack_50 = DAT_00682c00;
      uStack_4c = DAT_00682c04;
      uStack_44 = DAT_00682bfc;
      uStack_40 = DAT_00682c00;
      uStack_3c = DAT_00682c04;
      if (param_1 == 0) {
        DAT_00722d54 = 0;
        do {
          iVar3 = (**(code **)(*DAT_00722d3c + 0x34))(DAT_00722d3c,local_60,0,&LAB_00600e70,0,0x81);
        } while (iVar3 == -0x7788fea2);
        if (-1 < iVar3) {
          if (DAT_00722d54 == 0) {
            (**(code **)(*DAT_00722d3c + 0x10))(DAT_00722d3c);
            (**(code **)(*DAT_00722d3c + 8))(DAT_00722d3c);
            DAT_00722d3c = (int *)0x0;
            return 1;
          }
          goto LAB_00601584;
        }
      }
      else {
        local_60[1] = 0x2044;
        uStack_38 = param_2;
        uStack_30 = param_3;
        do {
          iVar3 = (**(code **)(*DAT_00722d3c + 0x60))(DAT_00722d3c,local_60,0x82);
        } while (iVar3 == -0x7788fea2);
        if (-1 < iVar3) {
LAB_00601584:
          iVar3 = (**(code **)(*DAT_00722d3c + 0x18))(DAT_00722d3c,&DAT_00722d40,0,0,0,0,0);
          DAT_00722ce8 = 0;
          if (-1 < iVar3) {
            DAT_00722ce8 = DAT_00722d40;
            return 0;
          }
          (**(code **)(*DAT_00722d3c + 0x10))(DAT_00722d3c);
          (**(code **)(*DAT_00722d3c + 8))(DAT_00722d3c);
          DAT_00722d3c = (int *)0x0;
          uVar7 = FUN_006001c0(iVar3,&DAT_0068c120);
          FUN_00401010(1,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                       s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x40e,
                       s_Cannot_create_player_00683228,uVar7);
          return 0xffffffff;
        }
      }
      (**(code **)(*DAT_00722d3c + 0x10))(DAT_00722d3c);
      (**(code **)(*DAT_00722d3c + 8))(DAT_00722d3c);
      DAT_00722d3c = (int *)0x0;
    }
  }
  return 3;
}

