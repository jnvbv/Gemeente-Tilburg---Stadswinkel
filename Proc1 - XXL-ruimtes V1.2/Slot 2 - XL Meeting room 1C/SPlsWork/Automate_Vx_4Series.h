namespace Automate_VX_4Series;
        // class declarations
         class AutomateVx4Series;
         class LogLevel;
         class LogVisibility;
         class Logger;
         class DebugEventArgs;
     class AutomateVx4Series 
    {
        // class delegates
        delegate FUNCTION LoginStateCallbackHandler ( INTEGER loginFb );
        delegate FUNCTION AutoSwitchStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION RecStatusCallbackHandler ( INTEGER status , INTEGER state );
        delegate FUNCTION IsoRecStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION SystemStatusCallbackHandler ( SIMPLSHARPSTRING status );
        delegate FUNCTION StreamStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION OutputStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION RoomConfigStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION RoomConfigCountCallbackHandler ( INTEGER number );
        delegate FUNCTION RoomConfigClearCallbackHandler ( );
        delegate FUNCTION RoomConfigNamesCallbackHandler ( INTEGER index , SIMPLSHARPSTRING configName );
        delegate FUNCTION CameraSelectCallbackHandler ( INTEGER camera );
        delegate FUNCTION CameraPresetCallbackHandler ( INTEGER camera , INTEGER preset );
        delegate FUNCTION LayoutStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION LayoutCountCallbackHandler ( INTEGER number );
        delegate FUNCTION LayoutClearCallbackHandler ( );
        delegate FUNCTION LayoutNamesCallbackHandler ( INTEGER index , SIMPLSHARPSTRING layoutName );
        delegate FUNCTION AutomateVxErrorCallbackHandler ( INTEGER code , SIMPLSHARPSTRING error , SIMPLSHARPSTRING requestBody );
        delegate FUNCTION CopyFilesStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION RecSpaceInfoCallbackHandler ( INTEGER available , INTEGER total );
        delegate FUNCTION PluginStatusCallbackHandler ( SIMPLSHARPSTRING pluginName , INTEGER code , SIMPLSHARPSTRING requestBody );
        delegate FUNCTION PauseEnabledCallbackHandler ( INTEGER state );
        delegate FUNCTION CopyStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION SleepStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION GoHomeStatusCallbackHandler ( INTEGER status );
        delegate FUNCTION CameraCountCallbackHandler ( INTEGER number );
        delegate FUNCTION ScenarioCountCallbackHandler ( INTEGER number );
        delegate FUNCTION ScenarioStatusCallbackHandler ( INTEGER number );
        delegate FUNCTION ScenarioClearCallbackHandler ( );
        delegate FUNCTION ScenarioNamesCallbackHandler ( INTEGER index , SIMPLSHARPSTRING scenarioName );

        // class events
        EventHandler DebugState ( AutomateVx4Series sender, DebugEventArgs args );

        // class functions
        FUNCTION Login ();
        FUNCTION ToggleAutoSwitch ();
        FUNCTION StartAutoSwitch ();
        FUNCTION StopAutoSwitch ();
        FUNCTION PauseRecord ();
        FUNCTION ToggleRecord ();
        FUNCTION StartRecord ();
        FUNCTION StopRecord ();
        FUNCTION ToggleIsoRecord ();
        FUNCTION StartIsoRecord ();
        FUNCTION StopIsoRecord ();
        FUNCTION ToggleStream ();
        FUNCTION StartStream ();
        FUNCTION StopStream ();
        FUNCTION ToggleOutput ();
        FUNCTION StartOutput ();
        FUNCTION StopOutput ();
        FUNCTION ChangeLayout ( INTEGER layout );
        FUNCTION ChangeRoomConfig ( INTEGER config );
        FUNCTION ForceChangeRoomConfig ( INTEGER config );
        FUNCTION GoToScenario ( INTEGER id );
        FUNCTION GetScenarios ();
        FUNCTION GetScenarioStatus ();
        FUNCTION GetCameras ();
        FUNCTION SelectCamera ( INTEGER camera );
        FUNCTION MoveCamera ( INTEGER camera , INTEGER direction );
        FUNCTION StopCamera ( INTEGER camera );
        FUNCTION ZoomCamera ( INTEGER camera , INTEGER direction );
        FUNCTION StopZoom ( INTEGER camera );
        FUNCTION ManualSwitchCamera ( INTEGER camera );
        FUNCTION SetCameraPreset ( INTEGER cameraSelected , INTEGER preset );
        FUNCTION SetLiveCameraPreset ( INTEGER preset );
        FUNCTION CopyFiles ();
        FUNCTION CallPlugin ();
        FUNCTION Sleep ();
        FUNCTION Wake ();
        FUNCTION GoHome ();
        FUNCTION GetAutoSwitchStatus ();
        FUNCTION GetRecordStatus ();
        FUNCTION GetIsoRecordStatus ();
        FUNCTION GetStreamStatus ();
        FUNCTION GetOutputStatus ();
        FUNCTION GetLayouts ();
        FUNCTION GetCurrentLayout ();
        FUNCTION GetRoomConfigs ();
        FUNCTION GetCameraStatus ();
        FUNCTION GetCurrentRoomConfig ();
        FUNCTION GetRecordingSpace ();
        FUNCTION GetCopyStatus ();
        FUNCTION Debug ( INTEGER state );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING FileDestination[];
        STRING LogDestination[];
        INTEGER DeleteSource;
        STRING Username[];
        STRING Password[];
        STRING PluginName[];
        STRING PluginArg1[];
        STRING PluginArg2[];
        STRING PluginArg3[];
        STRING IpAddress[];
        INTEGER Port;
        INTEGER IsHttps;
        DelegateProperty LoginStateCallbackHandler LoginStateCallbackEvent;
        DelegateProperty AutoSwitchStatusCallbackHandler AutoSwitchStatusCallbackEvent;
        DelegateProperty RecStatusCallbackHandler RecStatusCallbackEvent;
        DelegateProperty IsoRecStatusCallbackHandler IsoRecStatusCallbackEvent;
        DelegateProperty SystemStatusCallbackHandler SystemStatusCallbackEvent;
        DelegateProperty StreamStatusCallbackHandler StreamStatusCallbackEvent;
        DelegateProperty OutputStatusCallbackHandler OutputStatusCallbackEvent;
        DelegateProperty RoomConfigStatusCallbackHandler RoomConfigStatusCallbackEvent;
        DelegateProperty RoomConfigCountCallbackHandler RoomConfigCountCallbackEvent;
        DelegateProperty RoomConfigClearCallbackHandler RoomConfigClearCallbackEvent;
        DelegateProperty RoomConfigNamesCallbackHandler RoomConfigNamesCallbackEvent;
        DelegateProperty CameraSelectCallbackHandler CameraSelectCallbackEvent;
        DelegateProperty CameraPresetCallbackHandler CameraPresetCallbackEvent;
        DelegateProperty LayoutStatusCallbackHandler LayoutStatusCallbackEvent;
        DelegateProperty LayoutCountCallbackHandler LayoutCountCallbackEvent;
        DelegateProperty LayoutClearCallbackHandler LayoutClearCallbackEvent;
        DelegateProperty LayoutNamesCallbackHandler LayoutNamesCallbackEvent;
        DelegateProperty AutomateVxErrorCallbackHandler AutomateVxErrorCallbackEvent;
        DelegateProperty CopyFilesStatusCallbackHandler CopyFilesStatusCallbackEvent;
        DelegateProperty RecSpaceInfoCallbackHandler RecSpaceInfoCallbackEvent;
        DelegateProperty PluginStatusCallbackHandler PluginStatusCallbackEvent;
        DelegateProperty PauseEnabledCallbackHandler PauseEnabledCallbackEvent;
        DelegateProperty CopyStatusCallbackHandler CopyStatusCallbackEvent;
        DelegateProperty SleepStatusCallbackHandler SleepStatusCallbackEvent;
        DelegateProperty GoHomeStatusCallbackHandler GoHomeStatusCallbackEvent;
        DelegateProperty CameraCountCallbackHandler CameraCountCallbackEvent;
        DelegateProperty ScenarioCountCallbackHandler ScenarioCountCallbackEvent;
        DelegateProperty ScenarioStatusCallbackHandler ScenarioStatusCallbackEvent;
        DelegateProperty ScenarioClearCallbackHandler ScenarioClearCallbackEvent;
        DelegateProperty ScenarioNamesCallbackHandler ScenarioNamesCallbackEvent;
    };

    static class LogLevel // enum
    {
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER Error;
        static SIGNED_LONG_INTEGER Warning;
        static SIGNED_LONG_INTEGER Info;
        static SIGNED_LONG_INTEGER Verbose;
    };

    static class LogVisibility // enum
    {
        static SIGNED_LONG_INTEGER Off;
        static SIGNED_LONG_INTEGER Developer;
        static SIGNED_LONG_INTEGER Programmer;
        static SIGNED_LONG_INTEGER User;
    };

     class Logger 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION WriteLine ( LogLevel level , LogVisibility visibility , STRING objectName , STRING methodName , STRING message );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        LogLevel MinLogLevelForConsole;
        LogLevel MinLogLevelForFile;
        LogLevel MinLogLevelForErrorLog;
        LogVisibility MinLogVisibilityForConsole;
        LogVisibility MinLogVisibilityForFile;
        LogVisibility MinLogVisibilityForErrorLog;

        // class properties
    };

     class DebugEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

