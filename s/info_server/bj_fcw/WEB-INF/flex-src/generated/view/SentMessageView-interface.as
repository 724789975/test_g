
package view
{
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
import mx.containers.VBox;
import mx.controls.ComboBox;
import mx.controls.DataGrid;
import mx.controls.DateField;
import mx.controls.TextInput;
import mx.core.ClassFactory;
import mx.core.DeferredInstanceFromClass;
import mx.core.DeferredInstanceFromFunction;
import mx.core.IDeferredInstance;
import mx.core.IFactory;
import mx.core.IPropertyChangeNotifier;
import mx.core.mx_internal;
import mx.rpc.remoting.mxml.RemoteObject;
import mx.styles.*;
import mx.containers.ApplicationControlBar;
import mx.containers.HBox;
import mx.controls.dataGridClasses.DataGridColumn;
import mx.controls.Button;
import mx.containers.VBox;
import mx.controls.Label;

public class SentMessageView extends mx.containers.VBox
{
	public function SentMessageView() {}

	[Bindable]
	public var getRo : mx.rpc.remoting.mxml.RemoteObject;
	[Bindable]
	public var receiverid : mx.controls.TextInput;
	[Bindable]
	public var isattached : mx.controls.ComboBox;
	[Bindable]
	public var isopened : mx.controls.ComboBox;
	[Bindable]
	public var startTime : mx.controls.DateField;
	[Bindable]
	public var endTime : mx.controls.DateField;
	[Bindable]
	public var messageData : mx.controls.DataGrid;

	mx_internal var _bindings : Array;
	mx_internal var _watchers : Array;
	mx_internal var _bindingsByDestination : Object;
	mx_internal var _bindingsBeginWithWord : Object;

include "D:/info_server/bj/WEB-INF/flex-src/view/SentMessageView.mxml:4,117";

}}
