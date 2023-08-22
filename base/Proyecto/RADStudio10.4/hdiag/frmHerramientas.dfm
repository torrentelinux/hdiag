object frmPrincipal: TfrmPrincipal
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'hdiag: Herramientas para el diagn'#243'stico de conectividad'
  ClientHeight = 364
  ClientWidth = 760
  Color = clBtnFace
  DefaultMonitor = dmPrimary
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 8
    Top = 8
    Width = 305
    Height = 273
    BevelInner = bvRaised
    BevelKind = bkSoft
    BevelOuter = bvSpace
    BorderWidth = 1
    Caption = 'Panel1'
    ShowCaption = False
    TabOrder = 0
    object Bevel1: TBevel
      Left = 8
      Top = 31
      Width = 169
      Height = 99
      Shape = bsFrame
    end
    object Bevel2: TBevel
      Left = 8
      Top = 167
      Width = 169
      Height = 90
      Shape = bsFrame
    end
    object StaticText1: TStaticText
      Left = 8
      Top = 8
      Width = 169
      Height = 17
      Hint = 'Visualiza los argumentos admitidos por la aplicaci'#243'n.'
      AutoSize = False
      Caption = #191'Qu'#233' aplicaci'#243'n desea conocer?'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 8
    end
    object StaticText2: TStaticText
      Left = 8
      Top = 144
      Width = 233
      Height = 17
      Hint = 'Ejecuta la aplicaci'#243'n con sus argumentos.'
      AutoSize = False
      Caption = #191'Qu'#233' aplicaci'#243'n desea ejecutar?'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 9
    end
    object rbPing: TRadioButton
      Left = 24
      Top = 41
      Width = 113
      Height = 17
      Hint = 'Comando ping'
      Caption = 'Ping'
      Checked = True
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      TabStop = True
      OnClick = rbPingClick
    end
    object rbIpconfig: TRadioButton
      Left = 24
      Top = 64
      Width = 113
      Height = 17
      Hint = 'Comando ipconfig'
      Caption = 'Ipconfig'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      OnClick = rbIpconfigClick
    end
    object rbNetstat: TRadioButton
      Left = 24
      Top = 87
      Width = 113
      Height = 17
      Hint = 'Comando netstat'
      Caption = 'Netstat'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 2
      OnClick = rbNetstatClick
    end
    object btnAplicar1: TButton
      Left = 183
      Top = 60
      Width = 75
      Height = 25
      Caption = 'A&plicar'
      TabOrder = 3
      OnClick = btnAplicar1Click
    end
    object rbPing2: TRadioButton
      Left = 24
      Top = 177
      Width = 113
      Height = 17
      Caption = 'Ping'
      TabOrder = 4
      OnClick = rbPing2Click
    end
    object rbIpconfig2: TRadioButton
      Left = 24
      Top = 200
      Width = 113
      Height = 17
      Caption = 'Ipconfig'
      TabOrder = 5
      OnClick = rbIpconfig2Click
    end
    object rbNetstat2: TRadioButton
      Left = 24
      Top = 223
      Width = 113
      Height = 17
      Caption = 'Netstat'
      TabOrder = 6
      OnClick = rbNetstat2Click
    end
    object btnAplicar2: TButton
      Left = 183
      Top = 196
      Width = 75
      Height = 25
      Caption = 'A&plicar'
      TabOrder = 7
      OnClick = btnAplicar2Click
    end
  end
  object txtLinea: TStaticText
    Left = 8
    Top = 329
    Width = 305
    Height = 17
    AutoSize = False
    Caption = 'comando...'
    TabOrder = 4
  end
  object btnSalir: TButton
    Left = 335
    Top = 70
    Width = 75
    Height = 25
    Caption = '&Salir'
    TabOrder = 1
    OnClick = btnSalirClick
  end
  object edtLinea: TEdit
    Left = 8
    Top = 292
    Width = 305
    Height = 21
    Hint = 
      'Escriba aqu'#237' los argumentos que acompa'#241'an a la aplicaci'#243'n luego ' +
      'presione sobre "Aplicar".'
    AutoSize = False
    MaxLength = 48
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    Text = '<escriba aqu'#237'>'
    TextHint = 
      'Escriba aqu'#237' los argumentos que acompa'#241'an a la aplicaci'#243'n luego ' +
      'presione sobre "Aplicar".'
    OnKeyUp = edtLineaKeyUp
  end
  object Panel2: TPanel
    Left = 432
    Top = 8
    Width = 305
    Height = 273
    BevelInner = bvRaised
    BevelKind = bkSoft
    BevelOuter = bvSpace
    BorderWidth = 1
    Caption = 'Panel1'
    ShowCaption = False
    TabOrder = 5
    object Bevel3: TBevel
      Left = 8
      Top = 31
      Width = 169
      Height = 99
      Shape = bsFrame
    end
    object Bevel4: TBevel
      Left = 8
      Top = 167
      Width = 169
      Height = 90
      Shape = bsFrame
    end
    object StaticText3: TStaticText
      Left = 8
      Top = 8
      Width = 169
      Height = 17
      Hint = 'Efect'#250'a una consulta en Wikipedia.'
      AutoSize = False
      Caption = #191'Qu'#233' aplicaci'#243'n desea consultar?'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 8
    end
    object StaticText4: TStaticText
      Left = 8
      Top = 144
      Width = 233
      Height = 17
      Hint = 'Visualiza videos en YouTube.'
      AutoSize = False
      Caption = #191'Qu'#233' aplicaci'#243'n desea mirar?'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 9
    end
    object rbPing3: TRadioButton
      Left = 24
      Top = 41
      Width = 113
      Height = 17
      Caption = 'Ping'
      Checked = True
      TabOrder = 0
      TabStop = True
      OnClick = rbPing3Click
    end
    object rbIpconfig3: TRadioButton
      Left = 24
      Top = 64
      Width = 113
      Height = 17
      Caption = 'Ipconfig'
      TabOrder = 1
      OnClick = rbIpconfig3Click
    end
    object rbNetstat3: TRadioButton
      Left = 24
      Top = 87
      Width = 113
      Height = 17
      Caption = 'Netstat'
      TabOrder = 2
      OnClick = rbNetstat3Click
    end
    object btnAplicar3: TButton
      Left = 183
      Top = 60
      Width = 75
      Height = 25
      Caption = 'A&plicar'
      TabOrder = 3
      OnClick = btnAplicar3Click
    end
    object rbPing4: TRadioButton
      Left = 24
      Top = 177
      Width = 113
      Height = 17
      Caption = 'Ping'
      TabOrder = 4
      OnClick = rbPing4Click
    end
    object rbIpconfig4: TRadioButton
      Left = 24
      Top = 200
      Width = 113
      Height = 17
      Caption = 'Ipconfig'
      TabOrder = 5
      OnClick = rbIpconfig4Click
    end
    object rbNetstat4: TRadioButton
      Left = 24
      Top = 223
      Width = 113
      Height = 17
      Caption = 'Netstat'
      TabOrder = 6
      OnClick = rbNetstat4Click
    end
    object btnAplicar4: TButton
      Left = 183
      Top = 196
      Width = 75
      Height = 25
      Caption = 'A&plicar'
      TabOrder = 7
      OnClick = btnAplicar4Click
    end
  end
  object btnAyuda: TButton
    Left = 335
    Top = 115
    Width = 75
    Height = 25
    Hint = 'Visualiza una ayuda.'
    Caption = '&Ayuda'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = btnAyudaClick
  end
end
