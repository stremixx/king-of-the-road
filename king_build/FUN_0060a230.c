
undefined4 FUN_0060a230(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  size_t _Count;
  char *_Source;
  char *pcVar3;
  CHAR local_100 [256];
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    return 0;
  }
  if (-0x7789fdbb < (int)param_1) {
    if ((int)param_1 < -0x7789fd93) {
      if (param_1 == 0x8876026c) {
        _Source = s_DDERR_DCALREADYCREATED_00684180;
        goto LAB_0060aaa7;
      }
      switch(param_1) {
      case 0x88760246:
        _Source = s_DDERR_NOTFLIPPABLE_006841e4;
        break;
      case 0x88760247:
        _Source = s_DDERR_CANTDUPLICATE_0068424c;
        break;
      case 0x88760248:
        _Source = s_DDERR_NOTLOCKED_006841d4;
        break;
      case 0x88760249:
        _Source = s_DDERR_CANTCREATEDC_00684260;
        break;
      case 0x8876024a:
        _Source = s_DDERR_NODC_0068420c;
        break;
      case 0x8876024b:
        _Source = s_DDERR_WRONGMODE_00684198;
        break;
      case 0x8876024c:
        _Source = s_DDERR_IMPLICITLYCREATED_00684234;
        break;
      case 0x8876024d:
        _Source = s_DDERR_NOTPALETTIZED_006841c0;
        break;
      case 0x8876024e:
        _Source = s_DDERR_UNSUPPORTEDMODE_006841a8;
        break;
      case 0x8876024f:
        _Source = s_DDERR_NOMIPMAPHW_006841f8;
        break;
      case 0x88760250:
        _Source = s_DDERR_INVALIDSURFACETYPE_00684218;
        break;
      default:
        goto switchD_0060a32a_caseD_8876000b;
      }
      goto LAB_0060aaa7;
    }
    if ((int)param_1 < -0x7789fd1d) {
      if (param_1 == 0x887602e2) {
        _Source = s_D3DERR_TEXTURE_BADSIZE_00683da4;
        goto LAB_0060aaa7;
      }
      switch(param_1) {
      case 0x88760276:
        _Source = s_DDERR_NONONLOCALVIDMEM_0068412c;
        break;
      default:
        goto switchD_0060a32a_caseD_8876000b;
      case 0x88760280:
        _Source = s_DDERR_CANTPAGELOCK_0068416c;
        break;
      case 0x88760294:
        _Source = s_DDERR_CANTPAGEUNLOCK_00684154;
        break;
      case 0x887602a8:
        _Source = s_DDERR_NOTPAGELOCKED_00684118;
        break;
      case 0x887602b2:
        _Source = s_DDERR_MOREDATA_00684144;
        break;
      case 0x887602b7:
        _Source = s_DDERR_VIDEONOTACTIVE_00684100;
        break;
      case 0x887602bc:
        _Source = s_D3DERR_BADMAJORVERSION_006840e8;
        break;
      case 0x887602bd:
        _Source = s_D3DERR_BADMINORVERSION_006840d0;
        break;
      case 0x887602c1:
        _Source = s_D3DERR_INVALID_DEVICE_006840b8;
        break;
      case 0x887602c2:
        _Source = s_D3DERR_INITFAILED_006840a4;
        break;
      case 0x887602c6:
        _Source = s_D3DERR_EXECUTE_CREATE_FAILED_00684084;
        break;
      case 0x887602c7:
        _Source = s_D3DERR_EXECUTE_DESTROY_FAILED_00684064;
        break;
      case 0x887602c8:
        _Source = s_D3DERR_EXECUTE_LOCK_FAILED_00684048;
        break;
      case 0x887602c9:
        _Source = s_D3DERR_EXECUTE_UNLOCK_FAILED_00684028;
        break;
      case 0x887602ca:
        _Source = s_D3DERR_EXECUTE_LOCKED_00684010;
        break;
      case 0x887602cb:
        _Source = s_D3DERR_EXECUTE_NOT_LOCKED_00683ff4;
        break;
      case 0x887602cc:
        _Source = s_D3DERR_EXECUTE_FAILED_00683fdc;
        break;
      case 0x887602cd:
        _Source = s_D3DERR_CLIPPED_FAILED_00683fc4;
        break;
      case 0x887602d0:
        _Source = s_D3DERR_TEXTURE_NO_SUPPORT_00683fa8;
        break;
      case 0x887602d1:
        _Source = s_D3DERR_TEXTURE_CREATE_FAILED_00683f88;
        break;
      case 0x887602d2:
        _Source = s_D3DERR_TEXTURE_DESTROY_FAILED_00683f68;
        break;
      case 0x887602d3:
        _Source = s_D3DERR_TEXTURE_LOCK_FAILED_00683f4c;
        break;
      case 0x887602d4:
        _Source = s_D3DERR_TEXTURE_UNLOCK_FAILED_00683f2c;
        break;
      case 0x887602d5:
        _Source = s_D3DERR_LOAD_FAILED_00683f18;
        break;
      case 0x887602d6:
        _Source = s_D3DERR_SWAP_FAILED_00683f04;
        break;
      case 0x887602d7:
        _Source = s_D3DERR_TEXTURE_LOCKED_00683eec;
        break;
      case 0x887602d8:
        _Source = s_D3DERR_TEXTURE_NOT_LOCKED_00683ed0;
        break;
      case 0x887602d9:
        _Source = s_D3DERR_TEXTURE_GETSURF_FAILED_00683eb0;
        break;
      case 0x887602da:
        _Source = s_D3DERR_MATRIX_CREATE_FAILED_00683e94;
        break;
      case 0x887602db:
        _Source = s_D3DERR_MATRIX_DESTROY_FAILED_00683e74;
        break;
      case 0x887602dc:
        _Source = s_D3DERR_MATRIX_SETDATA_FAILED_00683e54;
        break;
      case 0x887602dd:
        _Source = s_D3DERR_MAXTRIX_GETDATA_FAILED_00683e34;
        break;
      case 0x887602de:
        _Source = s_D3DERR_SETVIEWPORTDATA_FAILED_00683e14;
        break;
      case 0x887602df:
        _Source = s_D3DERR_INVALIDCURRENTVIEWPORT_00683df4;
        break;
      case 0x887602e0:
        _Source = s_D3DERR_INVALIDPRIMITIVETYPE_00683dd8;
        break;
      case 0x887602e1:
        _Source = s_D3DERR_INVALIDVERTEXTYPE_00683dbc;
      }
      goto LAB_0060aaa7;
    }
    if ((int)param_1 < -0x7789f7e6) {
      if (param_1 == 0x88760819) {
        _Source = s_D3DERR_UNSUPPORTEDCOLOROPERATION_00683b64;
        goto LAB_0060aaa7;
      }
      switch(param_1) {
      case 0x887602e4:
        _Source = s_D3DERR_MATERIAL_CREATE_FAILED_00683d84;
        break;
      case 0x887602e5:
        _Source = s_D3DERR_MATERIAL_DESTROY_FAILED_00683d64;
        break;
      case 0x887602e6:
        _Source = s_D3DERR_MATERIAL_SETDATA_FAILED_00683d44;
        break;
      case 0x887602e7:
        _Source = s_D3DERR_MATERIAL_GETDATA_FAILED_00683d24;
        break;
      case 0x887602e8:
        _Source = s_D3DERR_INVALIDPALETTE_00683d0c;
        break;
      case 0x887602e9:
        _Source = s_D3DERR_ZBUFF_NEEDS_SYSTEMMEMORY_00683cec;
        break;
      case 0x887602ea:
        _Source = s_D3DERR_ZBUFF_NEEDS_VIDEOMEMORY_00683ccc;
        break;
      case 0x887602eb:
        _Source = s_D3DERR_SURFACENOTINVIDMEM_00683cb0;
        break;
      default:
        goto switchD_0060a32a_caseD_8876000b;
      case 0x887602ee:
        _Source = s_D3DERR_LIGHT_SET_FAILED_00683c98;
        break;
      case 0x887602ef:
        _Source = s_D3DERR_LIGHTHASVIEWPORT_00683c80;
        break;
      case 0x887602f0:
        _Source = s_D3DERR_LIGHTNOTINTHISVIEWPORT_00683c60;
        break;
      case 0x887602f8:
        _Source = s_D3DERR_SCENE_IN_SCENE_00683c48;
        break;
      case 0x887602f9:
        _Source = s_D3DERR_SCENE_NOT_IN_SCENE_00683c2c;
        break;
      case 0x887602fa:
        _Source = s_D3DERR_SCENE_BEGIN_FAILED_00683c10;
        break;
      case 0x887602fb:
        _Source = s_D3DERR_SCENE_END_FAILED_00683bf8;
        break;
      case 0x88760302:
        _Source = s_D3DERR_INBEGIN_00683be8;
        break;
      case 0x88760303:
        _Source = s_D3DERR_NOTINBEGIN_00683bd4;
        break;
      case 0x88760304:
        _Source = s_D3DERR_NOVIEWPORTS_00683bc0;
        break;
      case 0x88760305:
        _Source = s_D3DERR_VIEWPORTDATANOTSET_00683ba4;
        break;
      case 0x88760306:
        _Source = s_D3DERR_VIEWPORTHASNODEVICE_00683b88;
      }
      goto LAB_0060aaa7;
    }
    if ((int)param_1 < -0x7789f7d9) {
      if (param_1 == 0x88760826) {
        _Source = s_D3DERR_CONFLICTINGTEXTUREPALETTE_00683a68;
        goto LAB_0060aaa7;
      }
      switch(param_1) {
      case 0x8876081a:
        _Source = s_D3DERR_UNSUPPORTEDCOLORARG_00683acc;
        break;
      case 0x8876081b:
        _Source = s_D3DERR_UNSUPPORTEDALPHAOPERATION_00683ae8;
        break;
      case 0x8876081c:
        _Source = s_D3DERR_UNSUPPORTEDALPHAARG_00683b0c;
        break;
      case 0x8876081d:
        _Source = s_D3DERR_TOOMANYOPERATIONS_00683b28;
        break;
      case 0x8876081e:
        _Source = s_DDERR_CONFLICTINGTEXTUREFILTER_00683b44;
        break;
      case 0x8876081f:
        _Source = s_D3DERR_UNSUPPORTEDFACTORVALUE_00683aac;
        break;
      default:
        goto switchD_0060a32a_caseD_8876000b;
      case 0x88760822:
        _Source = s_D3DERR_UNSUPPORTEDTEXTUREFILTER_00683a8c;
      }
      goto LAB_0060aaa7;
    }
    if ((int)param_1 < 1) {
      if (param_1 == 0) {
        _Source = s_DD_OK_006839fc;
        goto LAB_0060aaa7;
      }
      switch(param_1) {
      case 0x88762711:
        _Source = s_APPERR_GENERIC_00683a58;
        break;
      case 0x88762712:
        _Source = s_APPERR_INVALIDPARAMS_00683a40;
        break;
      case 0x88762713:
        _Source = s_APPERR_NOT_INITIALIZED_00683a28;
        break;
      case 0x88762714:
        _Source = s_APPERR_OUTOFMEMORY_00683a14;
        break;
      case 0x88762715:
        _Source = s_APPERR_NOTFOUND_00683a04;
        break;
      default:
        goto switchD_0060a32a_caseD_8876000b;
      }
      goto LAB_0060aaa7;
    }
    goto switchD_0060a32a_caseD_8876000b;
  }
  if (param_1 == 0x88760245) {
    _Source = s_DDERR_EXCLUSIVEMODEALREADYSET_00684274;
    goto LAB_0060aaa7;
  }
  if (-0x7789fea2 < (int)param_1) {
    switch(param_1) {
    case 0x88760168:
      _Source = s_DDERR_OUTOFCAPS_006844a0;
      break;
    default:
      goto switchD_0060a32a_caseD_8876000b;
    case 0x8876017c:
      _Source = s_DDERR_OUTOFVIDEOMEMORY_00684488;
      break;
    case 0x8876017e:
      _Source = s_DDERR_OVERLAYCANTCLIP_00684470;
      break;
    case 0x88760180:
      _Source = s_DDERR_OVERLAYCOLORKEYONLYONEACTI_0068444c;
      break;
    case 0x88760183:
      _Source = s_DDERR_PALETTEBUSY_00684420;
      break;
    case 0x88760190:
      _Source = s_DDERR_COLORKEYNOTSET_00684608;
      break;
    case 0x8876019a:
      _Source = s_DDERR_SURFACEALREADYATTACHED_006843c4;
      break;
    case 0x887601a4:
      _Source = s_DDERR_SURFACEALREADYDEPENDENT_006843a4;
      break;
    case 0x887601ae:
      _Source = s_DDERR_SURFACEBUSY_00684390;
      break;
    case 0x887601b3:
      _Source = s_DDERR_CANTLOCKSURFACE_0068463c;
      break;
    case 0x887601b8:
      _Source = s_DDERR_SURFACEISOBSCURED_00684378;
      break;
    case 0x887601c2:
      _Source = s_DDERR_SURFACELOST_00684364;
      break;
    case 0x887601cc:
      _Source = s_DDERR_SURFACENOTATTACHED_00684348;
      break;
    case 0x887601d6:
      _Source = s_DDERR_TOOBIGHEIGHT_00684334;
      break;
    case 0x887601e0:
      _Source = s_DDERR_TOOBIGSIZE_00684320;
      break;
    case 0x887601ea:
      _Source = s_DDERR_TOOBIGWIDTH_0068430c;
      break;
    case 0x887601fe:
      _Source = s_DDERR_UNSUPPORTEDFORMAT_006842f4;
      break;
    case 0x88760208:
      _Source = s_DDERR_UNSUPPORTEDMASK_006842dc;
      break;
    case 0x88760219:
      _Source = s_DDERR_VERTICALBLANKINPROGRESS_006842bc;
      break;
    case 0x8876021c:
      _Source = s_DDERR_WASSTILLDRAWING_006842a4;
      break;
    case 0x88760230:
      _Source = s_DDERR_XALIGN_00684294;
      break;
    case 0x88760231:
      _Source = s_DDERR_INVALIDDIRECTDRAWGUID_0068459c;
      break;
    case 0x88760232:
      _Source = s_DDERR_DIRECTDRAWALREADYCREATED_006845e8;
      break;
    case 0x88760233:
      _Source = s_DDERR_NODIRECTDRAWHW_00684530;
      break;
    case 0x88760234:
      _Source = s_DDERR_PRIMARYSURFACEALREADYEXIST_006843fc;
      break;
    case 0x88760235:
      _Source = s_DDERR_NOEMULATION_0068451c;
      break;
    case 0x88760236:
      _Source = s_DDERR_REGIONTOOSMALL_006843e4;
      break;
    case 0x88760237:
      _Source = s_DDERR_CLIPPERISUSINGHWND_00684620;
      break;
    case 0x88760238:
      _Source = s_DDERR_NOCLIPPERATTACHED_0068455c;
      break;
    case 0x88760239:
      _Source = s_DDERR_NOHWND_0068450c;
      break;
    case 0x8876023a:
      _Source = s_DDERR_HWNDSUBCLASSED_006845b8;
      break;
    case 0x8876023b:
      _Source = s_DDERR_HWNDALREADYSET_006845d0;
      break;
    case 0x8876023c:
      _Source = s_DDERR_NOPALETTEATTACHED_006844e0;
      break;
    case 0x8876023d:
      _Source = s_DDERR_NOPALETTEHW_006844cc;
      break;
    case 0x8876023e:
      _Source = s_DDERR_BLTFASTCANTCLIP_00684654;
      break;
    case 0x8876023f:
      _Source = s_DDERR_NOBLTHW_00684574;
      break;
    case 0x88760240:
      _Source = s_DDERR_NODDROPSHW_00684548;
      break;
    case 0x88760241:
      _Source = s_DDERR_OVERLAYNOTVISIBLE_00684434;
      break;
    case 0x88760242:
      _Source = s_DDERR_NOOVERLAYDEST_006844f8;
      break;
    case 0x88760243:
      _Source = s_DDERR_INVALIDPOSITION_00684584;
      break;
    case 0x88760244:
      _Source = s_DDERR_NOTAOVERLAYSURFACE_006844b0;
    }
    goto LAB_0060aaa7;
  }
  if (param_1 == 0x8876015e) {
    _Source = s_DDERR_NOZOVERLAYHW_0068466c;
    goto LAB_0060aaa7;
  }
  if (-0x7789ff33 < (int)param_1) {
    switch(param_1) {
    case 0x887600d2:
      _Source = s_DDERR_NOCOLORCONVHW_00684800;
      break;
    default:
      goto switchD_0060a32a_caseD_8876000b;
    case 0x887600d4:
      _Source = s_DDERR_NOCOOPERATIVELEVELSET_006847bc;
      break;
    case 0x887600d7:
      _Source = s_DDERR_NOCOLORKEY_006847ec;
      break;
    case 0x887600dc:
      _Source = s_DDERR_NOCOLORKEYHW_006847d8;
      break;
    case 0x887600de:
      _Source = s_DDERR_NODIRECTDRAWSUPPORT_006847a0;
      break;
    case 0x887600e1:
      _Source = s_DDERR_NOEXCLUSIVEMODE_00684788;
      break;
    case 0x887600e6:
      _Source = s_DDERR_NOFLIPHW_00684778;
      break;
    case 0x887600f0:
      _Source = s_DDERR_NOGDI_0068476c;
      break;
    case 0x887600fa:
      _Source = s_DDERR_NOMIRRORHW_00684758;
      break;
    case 0x887600ff:
      _Source = s_DDERR_NOTFOUND_006846a4;
      break;
    case 0x88760104:
      _Source = s_DDERR_NOOVERLAYHW_00684744;
      break;
    case 0x88760118:
      _Source = s_DDERR_NORASTEROPHW_00684730;
      break;
    case 0x88760122:
      _Source = s_DDERR_NOROTATIONHW_0068471c;
      break;
    case 0x88760136:
      _Source = s_DDERR_NOSTRETCHHW_00684708;
      break;
    case 0x8876013c:
      _Source = s_DDERR_NOT4BITCOLOR_006846f4;
      break;
    case 0x8876013d:
      _Source = s_DDERR_NOT4BITCOLORINDEX_006846dc;
      break;
    case 0x88760140:
      _Source = s_DDERR_NOT8BITCOLOR_006846c8;
      break;
    case 0x8876014a:
      _Source = s_DDERR_NOTEXTUREHW_006846b4;
      break;
    case 0x8876014f:
      _Source = s_DDERR_NOVSYNCHW_00684694;
      break;
    case 0x88760154:
      _Source = s_DDERR_NOZBUFFERHW_00684680;
    }
    goto LAB_0060aaa7;
  }
  if (param_1 == 0x887600cd) {
    _Source = s_DDERR_NOCLIPLIST_00684814;
    goto LAB_0060aaa7;
  }
  if (-0x7789ffa6 < (int)param_1) {
    switch(param_1) {
    case 0x8876005f:
      _Source = s_DDERR_INCOMPATIBLEPRIMARY_006848e0;
      break;
    default:
      goto switchD_0060a32a_caseD_8876000b;
    case 0x88760064:
      _Source = s_DDERR_INVALIDCAPS_006848cc;
      break;
    case 0x8876006e:
      _Source = s_DDERR_INVALIDCLIPLIST_006848b4;
      break;
    case 0x88760078:
      _Source = s_DDERR_INVALIDMODE_006848a0;
      break;
    case 0x88760082:
      _Source = s_DDERR_INVALIDOBJECT_0068488c;
      break;
    case 0x88760091:
      _Source = s_DDERR_INVALIDPIXELFORMAT_00684870;
      break;
    case 0x88760096:
      _Source = s_DDERR_INVALIDRECT_0068485c;
      break;
    case 0x887600a0:
      _Source = s_DDERR_LOCKEDSURFACES_00684844;
      break;
    case 0x887600aa:
      _Source = s_DDERR_NO3D_00684838;
      break;
    case 0x887600b4:
      _Source = s_DDERR_NOALPHAHW_00684828;
    }
    goto LAB_0060aaa7;
  }
  if (param_1 == 0x8876005a) {
    _Source = s_DDERR_HEIGHTALIGN_006848fc;
    goto LAB_0060aaa7;
  }
  if ((int)param_1 < -0x7789fffa) {
    if (param_1 == 0x88760005) {
      _Source = s_DDERR_ALREADYINITIALIZED_00684970;
      goto LAB_0060aaa7;
    }
    if ((int)param_1 < -0x7ffbfe0f) {
      if (param_1 == 0x800401f0) {
        _Source = s_DDERR_NOTINITIALIZED_006849b4;
        goto LAB_0060aaa7;
      }
      if (param_1 == 0x80004001) {
        _Source = s_DDERR_UNSUPPORTED_006849cc;
        goto LAB_0060aaa7;
      }
      if (param_1 == 0x80004005) {
        _Source = s_DDERR_GENERIC_006849e0;
        goto LAB_0060aaa7;
      }
    }
    else {
      if (param_1 == 0x8007000e) {
        _Source = s_DDERR_OUTOFMEMORY_0068498c;
        goto LAB_0060aaa7;
      }
      if (param_1 == 0x80070057) {
        _Source = s_DDERR_INVALIDPARAMS_006849a0;
        goto LAB_0060aaa7;
      }
    }
switchD_0060a32a_caseD_8876000b:
    wsprintfA(local_100,s_Unknown_Error___ld_006839e8,param_1 & 0xffff);
    _Source = local_100;
  }
  else {
    switch(param_1) {
    case 0x8876000a:
      _Source = s_DDERR_CANNOTATTACHSURFACE_00684954;
      break;
    default:
      goto switchD_0060a32a_caseD_8876000b;
    case 0x88760014:
      _Source = s_DDERR_CANNOTDETACHSURFACE_00684938;
      break;
    case 0x88760028:
      _Source = s_DDERR_CURRENTLYNOTAVAIL_00684920;
      break;
    case 0x88760037:
      _Source = s_DDERR_EXCEPTION_00684910;
    }
  }
LAB_0060aaa7:
  uVar2 = 0xffffffff;
  pcVar3 = _Source;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _Count = ~uVar2 - 1;
  if (param_3 <= _Count) {
    _Count = param_3 - 1;
  }
  if (_Count != 0) {
    _strncpy(param_2,_Source,_Count);
    param_2[_Count] = '\0';
  }
  return 1;
}

