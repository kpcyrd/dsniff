/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "nfs_prot.h"
#include "config.h"

bool_t
xdr_nfsstat (XDR *xdrs, nfsstat *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ftype (XDR *xdrs, ftype *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfs_fh (XDR *xdrs, nfs_fh *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_opaque (xdrs, objp->data, NFS_FHSIZE))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfstime (XDR *xdrs, nfstime *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, &objp->seconds))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->useconds))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_fattr (XDR *xdrs, fattr *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_ftype (xdrs, &objp->type))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 10 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_int (xdrs, &objp->mode))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->nlink))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->uid))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->gid))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->size))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->blocksize))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rdev))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->blocks))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->fsid))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->fileid))
				 return FALSE;

		} else {
		IXDR_PUT_U_LONG(buf, objp->mode);
		IXDR_PUT_U_LONG(buf, objp->nlink);
		IXDR_PUT_U_LONG(buf, objp->uid);
		IXDR_PUT_U_LONG(buf, objp->gid);
		IXDR_PUT_U_LONG(buf, objp->size);
		IXDR_PUT_U_LONG(buf, objp->blocksize);
		IXDR_PUT_U_LONG(buf, objp->rdev);
		IXDR_PUT_U_LONG(buf, objp->blocks);
		IXDR_PUT_U_LONG(buf, objp->fsid);
		IXDR_PUT_U_LONG(buf, objp->fileid);
		}
		 if (!xdr_nfstime (xdrs, &objp->atime))
			 return FALSE;
		 if (!xdr_nfstime (xdrs, &objp->mtime))
			 return FALSE;
		 if (!xdr_nfstime (xdrs, &objp->ctime))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_ftype (xdrs, &objp->type))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 10 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_u_int (xdrs, &objp->mode))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->nlink))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->uid))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->gid))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->size))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->blocksize))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->rdev))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->blocks))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->fsid))
				 return FALSE;
			 if (!xdr_u_int (xdrs, &objp->fileid))
				 return FALSE;

		} else {
		objp->mode = IXDR_GET_U_LONG(buf);
		objp->nlink = IXDR_GET_U_LONG(buf);
		objp->uid = IXDR_GET_U_LONG(buf);
		objp->gid = IXDR_GET_U_LONG(buf);
		objp->size = IXDR_GET_U_LONG(buf);
		objp->blocksize = IXDR_GET_U_LONG(buf);
		objp->rdev = IXDR_GET_U_LONG(buf);
		objp->blocks = IXDR_GET_U_LONG(buf);
		objp->fsid = IXDR_GET_U_LONG(buf);
		objp->fileid = IXDR_GET_U_LONG(buf);
		}
		 if (!xdr_nfstime (xdrs, &objp->atime))
			 return FALSE;
		 if (!xdr_nfstime (xdrs, &objp->mtime))
			 return FALSE;
		 if (!xdr_nfstime (xdrs, &objp->ctime))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_ftype (xdrs, &objp->type))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->mode))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->nlink))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->uid))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->gid))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->size))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->blocksize))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->rdev))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->blocks))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->fsid))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->fileid))
		 return FALSE;
	 if (!xdr_nfstime (xdrs, &objp->atime))
		 return FALSE;
	 if (!xdr_nfstime (xdrs, &objp->mtime))
		 return FALSE;
	 if (!xdr_nfstime (xdrs, &objp->ctime))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_filename (XDR *xdrs, filename *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, NFS_MAXNAMLEN))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfspath (XDR *xdrs, nfspath *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, NFS_MAXPATHLEN))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_diropargs (XDR *xdrs, diropargs *objp)
{
	register int32_t *buf;

	 if (!xdr_nfs_fh (xdrs, &objp->dir))
		 return FALSE;
	 if (!xdr_filename (xdrs, &objp->name))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_diropokres (XDR *xdrs, diropokres *objp)
{
	register int32_t *buf;

	 if (!xdr_nfs_fh (xdrs, &objp->file))
		 return FALSE;
	 if (!xdr_fattr (xdrs, &objp->attributes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_diropres (XDR *xdrs, diropres *objp)
{
	register int32_t *buf;

	 if (!xdr_nfsstat (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case NFS_OK:
		 if (!xdr_diropokres (xdrs, &objp->diropres_u.diropres))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}

bool_t
xdr_readargs (XDR *xdrs, readargs *objp)
{
	register int32_t *buf;

	 if (!xdr_nfs_fh (xdrs, &objp->file))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->offset))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->count))
		 return FALSE;
	 if (!xdr_u_int (xdrs, &objp->totalcount))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_readokres (XDR *xdrs, readokres *objp)
{
	register int32_t *buf;

	 if (!xdr_fattr (xdrs, &objp->attributes))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->data.data_val, (u_int *) &objp->data.data_len, NFS_MAXDATA))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_readres (XDR *xdrs, readres *objp)
{
	register int32_t *buf;

	 if (!xdr_nfsstat (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case NFS_OK:
		 if (!xdr_readokres (xdrs, &objp->readres_u.reply))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}

bool_t
xdr_uint64 (XDR *xdrs, uint64 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint64_t (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_int64 (XDR *xdrs, int64 *objp)
{
	register int32_t *buf;

	 if (!xdr_int64_t (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_uint32 (XDR *xdrs, uint32 *objp)
{
	register int32_t *buf;

	 if (!xdr_u_int (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_int32 (XDR *xdrs, int32 *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_filename3 (XDR *xdrs, filename3 *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfspath3 (XDR *xdrs, nfspath3 *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, objp, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_fileid3 (XDR *xdrs, fileid3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint64 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_cookie3 (XDR *xdrs, cookie3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint64 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_cookieverf3 (XDR *xdrs, cookieverf3 objp)
{
	register int32_t *buf;

	 if (!xdr_opaque (xdrs, objp, NFS3_COOKIEVERFSIZE))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_createverf3 (XDR *xdrs, createverf3 objp)
{
	register int32_t *buf;

	 if (!xdr_opaque (xdrs, objp, NFS3_CREATEVERFSIZE))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_writeverf3 (XDR *xdrs, writeverf3 objp)
{
	register int32_t *buf;

	 if (!xdr_opaque (xdrs, objp, NFS3_WRITEVERFSIZE))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_uid3 (XDR *xdrs, uid3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint32 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_gid3 (XDR *xdrs, gid3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint32 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_size3 (XDR *xdrs, size3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint64 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_offset3 (XDR *xdrs, offset3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint64 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_mode3 (XDR *xdrs, mode3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint32 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_count3 (XDR *xdrs, count3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint32 (xdrs, objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfsstat3 (XDR *xdrs, nfsstat3 *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_ftype3 (XDR *xdrs, ftype3 *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_specdata3 (XDR *xdrs, specdata3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint32 (xdrs, &objp->specdata1))
		 return FALSE;
	 if (!xdr_uint32 (xdrs, &objp->specdata2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfs_fh3 (XDR *xdrs, nfs_fh3 *objp)
{
	register int32_t *buf;

	 if (!xdr_bytes (xdrs, (char **)&objp->data.data_val, (u_int *) &objp->data.data_len, NFS3_FHSIZE))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_nfstime3 (XDR *xdrs, nfstime3 *objp)
{
	register int32_t *buf;

	 if (!xdr_uint32 (xdrs, &objp->seconds))
		 return FALSE;
	 if (!xdr_uint32 (xdrs, &objp->nseconds))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_fattr3 (XDR *xdrs, fattr3 *objp)
{
	register int32_t *buf;

	 if (!xdr_ftype3 (xdrs, &objp->type))
		 return FALSE;
	 if (!xdr_mode3 (xdrs, &objp->mode))
		 return FALSE;
	 if (!xdr_uint32 (xdrs, &objp->nlink))
		 return FALSE;
	 if (!xdr_uid3 (xdrs, &objp->uid))
		 return FALSE;
	 if (!xdr_gid3 (xdrs, &objp->gid))
		 return FALSE;
	 if (!xdr_size3 (xdrs, &objp->size))
		 return FALSE;
	 if (!xdr_size3 (xdrs, &objp->used))
		 return FALSE;
	 if (!xdr_specdata3 (xdrs, &objp->rdev))
		 return FALSE;
	 if (!xdr_uint64 (xdrs, &objp->fsid))
		 return FALSE;
	 if (!xdr_fileid3 (xdrs, &objp->fileid))
		 return FALSE;
	 if (!xdr_nfstime3 (xdrs, &objp->atime))
		 return FALSE;
	 if (!xdr_nfstime3 (xdrs, &objp->mtime))
		 return FALSE;
	 if (!xdr_nfstime3 (xdrs, &objp->ctime))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_post_op_attr (XDR *xdrs, post_op_attr *objp)
{
	register int32_t *buf;

	 if (!xdr_bool (xdrs, &objp->attributes_follow))
		 return FALSE;
	switch (objp->attributes_follow) {
	case TRUE:
		 if (!xdr_fattr3 (xdrs, &objp->post_op_attr_u.attributes))
			 return FALSE;
		break;
	case FALSE:
		break;
	default:
		return FALSE;
	}
	return TRUE;
}

bool_t
xdr_wcc_attr (XDR *xdrs, wcc_attr *objp)
{
	register int32_t *buf;

	 if (!xdr_size3 (xdrs, &objp->size))
		 return FALSE;
	 if (!xdr_nfstime3 (xdrs, &objp->mtime))
		 return FALSE;
	 if (!xdr_nfstime3 (xdrs, &objp->ctime))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_pre_op_attr (XDR *xdrs, pre_op_attr *objp)
{
	register int32_t *buf;

	 if (!xdr_bool (xdrs, &objp->attributes_follow))
		 return FALSE;
	switch (objp->attributes_follow) {
	case TRUE:
		 if (!xdr_wcc_attr (xdrs, &objp->pre_op_attr_u.attributes))
			 return FALSE;
		break;
	case FALSE:
		break;
	default:
		return FALSE;
	}
	return TRUE;
}

bool_t
xdr_wcc_data (XDR *xdrs, wcc_data *objp)
{
	register int32_t *buf;

	 if (!xdr_pre_op_attr (xdrs, &objp->before))
		 return FALSE;
	 if (!xdr_post_op_attr (xdrs, &objp->after))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_diropargs3 (XDR *xdrs, diropargs3 *objp)
{
	register int32_t *buf;

	 if (!xdr_nfs_fh3 (xdrs, &objp->dir))
		 return FALSE;
	 if (!xdr_filename3 (xdrs, &objp->name))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_LOOKUP3args (XDR *xdrs, LOOKUP3args *objp)
{
	register int32_t *buf;

	 if (!xdr_diropargs3 (xdrs, &objp->what))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_LOOKUP3resok (XDR *xdrs, LOOKUP3resok *objp)
{
	register int32_t *buf;

	 if (!xdr_nfs_fh3 (xdrs, &objp->object))
		 return FALSE;
	 if (!xdr_post_op_attr (xdrs, &objp->obj_attributes))
		 return FALSE;
	 if (!xdr_post_op_attr (xdrs, &objp->dir_attributes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_LOOKUP3resfail (XDR *xdrs, LOOKUP3resfail *objp)
{
	register int32_t *buf;

	 if (!xdr_post_op_attr (xdrs, &objp->dir_attributes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_LOOKUP3res (XDR *xdrs, LOOKUP3res *objp)
{
	register int32_t *buf;

	 if (!xdr_nfsstat3 (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case NFS3_OK:
		 if (!xdr_LOOKUP3resok (xdrs, &objp->LOOKUP3res_u.resok))
			 return FALSE;
		break;
	default:
		 if (!xdr_LOOKUP3resfail (xdrs, &objp->LOOKUP3res_u.resfail))
			 return FALSE;
		break;
	}
	return TRUE;
}

bool_t
xdr_READ3args (XDR *xdrs, READ3args *objp)
{
	register int32_t *buf;

	 if (!xdr_nfs_fh3 (xdrs, &objp->file))
		 return FALSE;
	 if (!xdr_offset3 (xdrs, &objp->offset))
		 return FALSE;
	 if (!xdr_count3 (xdrs, &objp->count))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_READ3resok (XDR *xdrs, READ3resok *objp)
{
	register int32_t *buf;

	 if (!xdr_post_op_attr (xdrs, &objp->file_attributes))
		 return FALSE;
	 if (!xdr_count3 (xdrs, &objp->count))
		 return FALSE;
	 if (!xdr_bool (xdrs, &objp->eof))
		 return FALSE;
	 if (!xdr_bytes (xdrs, (char **)&objp->data.data_val, (u_int *) &objp->data.data_len, ~0))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_READ3resfail (XDR *xdrs, READ3resfail *objp)
{
	register int32_t *buf;

	 if (!xdr_post_op_attr (xdrs, &objp->file_attributes))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_READ3res (XDR *xdrs, READ3res *objp)
{
	register int32_t *buf;

	 if (!xdr_nfsstat (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case NFS3_OK:
		 if (!xdr_READ3resok (xdrs, &objp->READ3res_u.resok))
			 return FALSE;
		break;
	default:
		 if (!xdr_READ3resfail (xdrs, &objp->READ3res_u.resfail))
			 return FALSE;
		break;
	}
	return TRUE;
}