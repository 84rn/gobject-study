#ifndef __BASIC_CLASS_H__
#define __BASIC_CLASS_H__

#include <gtk/gtk.h>

// Macro for getting base type - GType is a gsize integer id of a type
#define BASIC_TYPE_CLASS (basic_class_get_type ())

/**
 * This macro creates the boilerplate code for the new type. It takes a couple of parameters which are then used to create basic function declarations. It:
 * - declares the basic_class_get_type (later defined in .c file)
 * - declares typedef of instance structure (later defined in .c file)
 * - defines typedef of class structure
 * - chains the autoptr stuff
 * - creates NAMESPACE_CLASS () macro/inline function for casting to (NamespaceClass *)
 * - creates NAMESPACE_IS_CLASS () which returns gboolean
 */

G_DECLARE_FINAL_TYPE (BasicClass, basic_class, BASIC, CLASS, GObject);
/**
 * Expands to: 
 *
 * GType basic_class_get_type (void);
 * typedef struct _BasicClass BasicClass;
 * typedef struct { GObjectClass parent_class; } BasicClassClass;
 * typedef BasicClass *BasicClass_autoptr;
 * static inline void glib_autoptr_cleanup_BasicClass (BasicClass **_ptr) {
 *     glib_autoptr_cleanup_GObject ((GObject **) _ptr); }
 * static inline BasicClass * BASIC_CLASS (gpointer ptr) {
 *     return ((BasicClass*) g_type_check_instance_cast ((GTypeInstance*) ptr, basic_class_get_type())); }
 * static inline gboolean BASIC_IS_CLASS (gpointer ptr);
 * 
 */

BasicClass * basic_class_new (void);
#endif
