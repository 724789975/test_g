
package popup
{
import component.MyDataGrid;
import flash.accessibility.*;
import flash.debugger.*;
import flash.display.*;
import flash.errors.*;
import flash.events.*;
import flash.external.*;
import flash.filters.*;
import flash.geom.*;
import flash.media.*;
import flash.net.*;
import flash.printing.*;
import flash.profiler.*;
import flash.system.*;
import flash.text.*;
import flash.ui.*;
import flash.utils.*;
import flash.xml.*;
import mx.binding.*;
import mx.containers.TitleWindow;
import mx.controls.Button;
import mx.core.ClassFactory;
import mx.core.DeferredInstanceFromClass;
import mx.core.DeferredInstanceFromFunction;
import mx.core.IDeferredInstance;
import mx.core.IFactory;
import mx.core.IPropertyChangeNotifier;
import mx.core.mx_internal;
import mx.rpc.remoting.mxml.RemoteObject;
import mx.styles.*;
import mx.containers.ControlBar;
import mx.containers.ApplicationControlBar;
import mx.containers.TitleWindow;
import mx.containers.VBox;

public class ViewSysItemLog extends mx.containers.TitleWindow
{
	public function ViewSysItemLog() {}

	[Bindable]
	public var updateRo : mx.rpc.remoting.mxml.RemoteObject;
	[Bindable]
	public var sysItemLogDG : component.MyDataGrid;
	[Bindable]
	public var close : mx.controls.Button;
	[Bindable]
	public var difference : mx.controls.Button;
	[Bindable]
	public var rollback : mx.controls.Button;

	mx_internal var _bindings : Array;
	mx_internal var _watchers : Array;
	mx_internal var _bindingsByDestination : Object;
	mx_internal var _bindingsBeginWithWord : Object;

include "D:/info_server/bj/WEB-INF/flex-src/popup/ViewSysItemLog.mxml:6,79";

}}
